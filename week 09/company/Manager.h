#ifndef _MANAGER_H_
#define _MANAGER_H_
#include "Manager.h"
#include "Employee.h"
#include "TeamLeader.h"
#include <vector>

class Manager: public Employee {

private:

	std::vector<TeamLeader> teamLeaders;

public:

	Manager(const char* name, int salary);
	void addTeamLeader(const TeamLeader& teamleader);
	int getExpenses() const;

	friend std::ostream& operator<<(std::ostream& out, const Manager& manager);

};


#endif

