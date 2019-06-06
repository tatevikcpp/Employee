#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

Employee::Employee(){}
void Employee::Education()
{
	cout << "Manager / Engineer have university education" << endl;
}

int Manager::Id() { return id; }
int Manager::Age() { return age; }
string Manager::Name() { return name; }

int Engineer::Id() { return id_; }
int Engineer::Age() { return age_; }
string Engineer::Name() { return name_; }
