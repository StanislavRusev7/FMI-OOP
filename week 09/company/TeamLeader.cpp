#include "TeamLeader.h"
#include <iostream>

TeamLeader::TeamLeader(const char* name, int salary, const char* projectName): Employee(name, salary) {
	this->projectName = projectName;
}

void TeamLeader::addEmployee(const Employee& employee) {
	team.push_back(employee);
}

int TeamLeader::getTeamExpenses() const {
	int total = 0;

	for (int i = 0; i < team.size(); i++) {
		total += team.at(i).getSalary();
	}
	total += this->getSalary();

	return total;
}

std::ostream& operator<<(std::ostream& out, const TeamLeader& teamLeader) {
	out << "TeamLeader: " << teamLeader.getName() << " with salary " << teamLeader.getSalary() << ". He is working on " << teamLeader.projectName << " with a team of: " << std::endl;
	for (int i = 0; i < teamLeader.team.size(); i++) {
		out << teamLeader.team.at(i);
	}
	return out;
}
