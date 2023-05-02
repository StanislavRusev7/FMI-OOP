#ifndef _TEAMLEADER_H_
#define _TEAMLEADER_H_
#include "Employee.h"
#include <iostream>
#include <string>
#include <vector>

class TeamLeader: public Employee {
private:

	std::vector<Employee> team;
	std::string projectName;

public:

	TeamLeader(const char* name, int salary, const char* projectName);
	void addEmployee(const Employee& employee);
	int getTeamExpenses() const;

	friend std::ostream& operator<<(std::ostream& out, const TeamLeader& teamLeader);

};

#endif 

