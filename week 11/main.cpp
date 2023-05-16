#include <iostream>
#include "Tire.h"
#include "Piston.h"
#include "Engine.h"
#include "FuelTank.hpp"

int main() {
    Tire* tire = new Tire("ASDF", 2005, 60, 10, 12);
    Piston* piston = new Piston("DFGH", 2009, 40, 50);
    Engine* engine = new Engine("OOPS", 2007, 105);
    FuelTank<std::string>* fuelTank = new FuelTank<std::string>("IGJ", 2003, 700, "gas");

    tire->display();
    piston->display();
    engine->addPiston(*piston);
    engine->display();
    fuelTank->display();

    delete tire;
    delete piston;
    delete engine;
    delete fuelTank;
}
