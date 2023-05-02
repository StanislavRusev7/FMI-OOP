#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include <string>

class Employee {
private:

	std::string name;
	int salary;

public:

	Employee(const char* name, int salary);
	int getSalary() const;
	std::string getName() const;

	friend std::ostream& operator<<(std::ostream& out, const Employee& employee);

};

#endif
