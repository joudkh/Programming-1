#include <iostream>
#include <string>
using namespace std;

class employee
{
public:
	int ID;
	int salary;
	string name;

public:
	void setID(int id)
	{
		ID = id;
	}

	void setSalary(int s)
	{
		salary = s;
	}

	void setName(string n)
	{
		name = n;
	}

	int getID()
	{
		return ID;
	}

	string getName()
	{
		return name;
	}

	int getSalary()
	{
		return salary;
	}

	void print()
	{
		cout << "ID:" << ID << " , Name: " << name << " , Salary: " << salary << endl;
	}
};

int main()
{
	employee e;
	int id, sal;
	string n;
	cout << "Enter Employee ID:";
	cin >> id;
	cout << "Enter Employee Name:";
	cin >> n;
	cout << "Enter Employee Salary:";
	cin >> sal;
	e.setID(id);
	e.setName(n);
	e.setSalary(sal);

	cout << "ID:" << e.getID() << endl;
	cout << "Name:" << e.getName() << endl;
	cout << "Salary:" << e.getSalary() << endl;

	e.print();

	return 0;
}