#pragma once
class Employee
{
public:

	Employee();
	~Employee() {}

	void Education();
	virtual int Id() = 0;
	virtual int Age() = 0;
	virtual string Name() = 0;
 

};

class Manager:public Employee
{
public:

	Manager(int age, int id, const string &name): age(20), id(1010), name("name") {}
	~Manager() {} 

	int Id();
	int Age();
	string Name();

private:

	int id;
	int age;
	string name;		
};

class Engineer :public Employee
{
public:

	Engineer(int age, int id, const string &name): age_(25), id_(1011), name_("name") {}
	~Engineer() {}

	int Id();
	int Age();
	string Name();

private:

	int id_;
	int age_;
	string name_;
};