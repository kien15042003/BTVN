#pragma once

#include "Employee.h"

class Manager : public Employee
{
private:
	int m_yoe{};

public:
	Manager();

	Manager(int id, string name, int age);

	void input() override;

	void show() override;
};