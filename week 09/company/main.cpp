#include <iostream>
#include "Employee.h"
#include "TeamLeader.h"
#include "Manager.h"

int main() {

    Employee ivan("Ivan", 1000);
    Employee pesho("Pesho", 2000);

    TeamLeader gosho("Gosho", 5000, "Facebook");
    gosho.addEmployee(pesho);

    Manager misho("Misho", 7000);
    misho.addTeamLeader(gosho);

    std::cout << misho;
    
}