#pragma once

#include "Employee.h"

class Programmer : public Employee
{
private:
	string m_programmingLanguage;

public:

	Programmer() {}

	Programmer(int id, string name, int age)
		: Employee{ id, name, age }
	{}

	virtual void show();
	virtual void input();
};

