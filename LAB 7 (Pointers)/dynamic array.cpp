#include <iostream>
using namespace std;

void ReadDynamic(int * x, int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> *(x + i);
	}
}

void PrintDynamic(int * x, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(x + i) << endl;
	}
}

void PrintDynamic2(int * x, int n)
{
	int *p = x;
	for (int i = 0; i < n; i++)
	{
		cout << *p << endl;
		p++;
	}
}


void copyDynamic(int * a, int * b, int n)
{


	for (int i = 0; i < n; i++)
		*(b + i) = *(a + i);
}

void main()
{
	int n;
	cout << "enter the size of the array" << endl;
	cin >> n;
	int * a = new int[n];
	cout << "enter the array elements" << endl;
	ReadDynamic(a, n);
	cout << "the array elements are" << endl;
	PrintDynamic(a, n);
	int * B;
	B = copyDynamic(a, n);
	/*int * C= new int [n];
	copyDynamic1(a, C, n);*/
	PrintDynamic(B, n);
	cout << "enter the element you want to look for" << endl;
	int v;
	cin >> v;
	if (Search(B, n, v) == true)
		cout << "the element is found" << endl;
	else
		cout << "the element is not found" << endl;
}