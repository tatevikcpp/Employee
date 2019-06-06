#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Employee *m = new Manager(20, 1010, "Anun");
	cout << "Id Mannager is: " << (m->Id()) << endl;
	cout << "Age Mannager is: " << (m->Age()) << endl;
	cout << "Name Manager is: " << (m->Name()) << endl;
	m->Education();

	Employee *e = new Engineer(25,1011, "Name");

	cout << "Id Engineer is: " << (e->Id()) << endl;
	cout << "Age Engineer is: " << (e->Age()) << endl;
	cout << "Name Engineer is: " << (e->Name()) << endl;
	e->Education();

	system("pause");
}