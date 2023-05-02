#include "Employee.h"
#include <iostream>

Employee::Employee(const char* name, int salary) {
	this->name = name;
	this->salary = salary;
}

int Employee::getSalary() const {
	return salary;
}

std::string Employee::getName() const {
	return name;
}

std::ostream& operator<<(std::ostream& out, const Employee& employee) {
	out << "Employee: " << employee.name << " with salary of: " << employee.salary << std::endl;
	return out;
}
