#include "Manager.h"

Manager::Manager(const char* name, int salary): Employee(name, salary) {}

void Manager::addTeamLeader(const TeamLeader& teamleader) {
	teamLeaders.push_back(teamleader);
}

int Manager::getExpenses() const {
	int total = 0;
	for (int i = 0; i < teamLeaders.size(); i++) {
		total += teamLeaders.at(i).getTeamExpenses();
	}

	total += this->getSalary();
	return total;
}

std::ostream& operator<<(std::ostream& out, const Manager& manager) {
	out << "Manager: " << manager.getName() << " with salary " << manager.getSalary() << ". He is working with: " << std::endl;
	for (int i = 0; i < manager.teamLeaders.size(); i++) {
		out << manager.teamLeaders.at(i);
	}
	return out;
}


