#include <iostream>
#include <string>
using namespace std;

struct employee
{
	string name;
	int salary;
};


employee readEmp()
{
	employee e;
	cout << "Enter Emp Name:";
	cin >> e.name;
	cout << "Enter Emp salary";
	cin >> e.salary;
	return e;
}

void readEmpByRef(employee &e)
{
	cout << "Enter Emp Name:";
	cin >> e.name;
	cout << "Enter Emp salary";
	cin >> e.salary;
}

void readEmpByPointer(employee *e)
{
	cout << "Enter Emp Name:";
	cin >> (*e).name;
	//cin >> e->name;
	cout << "Enter Emp salary";
	cin >> e->salary;
}

void printEmp(employee e)
{
	cout << "Name: " << e.name << endl;
	cout << "Salary: " << e.salary << endl;
}

int findMax(employee *e, int size)
{
	int max = -1;
	for (int i = 0; i < size; i++)
	{
		if (e[i].salary > max)
		{
			max = e[i].salary;
		}
	}
	return max;
}

int sumEmp(employee *e, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + e[i].salary;
	}
	return sum;
}

bool findEmp(employee*e, int size, string searchName)
{
	for (int i = 0; i < size; i++)
	{
		if (searchName == e[i].name)
		{
			return true;
		}
	}
	return false;
}

employee findEmp2(employee*e, int size, string searchName)
{
	for (int i = 0; i < size; i++)
	{
		if (searchName == e[i].name)
		{
			return e[i];
		}
	}
}

int main()
{
	int size;
	cin >> size;
	employee *e = new employee[size];
	for (int i = 0; i < size; i++)
	{
		//e[i] = readEmp();
		readEmpByRef(e[i]);
	}

	for (int i = 0; i < size; i++)
	{
		printEmp(e[i]);
	}

	cout << "Max Salary: " << findMax(e,size) << endl;

	string searchName;
	cout << "Enter Name to find:";
	cin >> searchName;
	bool b = findEmp(e, size, searchName);
	if (b == true)
	{
		employee emp = findEmp2(e, size, searchName);
		cout << "Salary: " << emp.salary << endl;
	}
	else
	{
		cout << "Not Found" << endl;
	}
}