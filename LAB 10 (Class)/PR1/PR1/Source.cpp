#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
	string Id;
	string name;
	double gpa;
	int mark[3];
	//int* mark;

public:
	Student()
	{
		Id = "00000";
		name = "-----";
		gpa = 0;
		for (int i = 0; i < 3; i++)
		{
			mark[i] = 0;
		}
		cout << "Hello World" << endl;
	}

	/*~Student()
	{
		delete[]mark;
	}*/

	Student(string i,string n)
	{
		//Id = i;
		setId(i);
		setName(n);
	}

	void setId(string i)
	{
		Id = i;
	}
	void setName(string n)
	{
		name = n;
	}
	void setGpa(double g)
	{
		gpa = g;
	}

	void setMark(int m[3])
	{
		for (int i = 0; i < 3; i++)
		{
			mark[i] = m[i];
		}
	}

	void set1Mark(int index, int v)
	{
		mark[index] = v;
	}

	void calculateGpa()
	{
		int sum = 0;
		for (int i = 0; i < 3; i++)
		{
			sum = sum + mark[i];
		}
		gpa = (double) sum / 3;
	}

	string getId()
	{
		return Id;
	}

	string getName()
	{
		return name;
	}

	double getGpa()
	{
		return gpa;
	}

	int* getMarks()
	{
		return &mark[0];
	}

	int get1Mark(int index)
	{
		return mark[index];
	}

	void print()
	{
		cout << "ID: " << Id << endl;
		cout << "Name: " << name << endl;
		cout << "Gpa: " << gpa << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << mark[i] << " ";
		}
		cout << endl;
	}

};

void main()
{
	int m[3] = { 73,81,96 };

	Student s;
	s.print();

	s.setId("1");
	s.setName("joud");
	s.setMark(m);
	s.calculateGpa();
	s.print();

	Student a[5];
	a[0].print();

}