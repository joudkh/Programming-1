#include <iostream>
using namespace std;

void main()
{
	int paul;
	paul = 5;
	cout << paul << endl;		// print paul value
	cout << &paul << endl;		// print paul address
	int x = paul;
	cout << x << endl;		// print x value
	//////////////////////////
	int* p = &paul;
	cout << p << endl;		// print the address that p is pointing to
	cout << *p << endl;		// print the value that p is pointing to
	cout << &p << endl;		// print pointer p address
	/////////////////////////
}