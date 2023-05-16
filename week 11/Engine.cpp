#include "Engine.h"

Engine::Engine(const char* manufacturer, unsigned year, int power): CarPart("Piston", manufacturer, year) {

	this->power = power;

}

void Engine::display() const {
	std::cout << "Id: " << id << std::endl;
	std::cout << name << " " << manunfacturer << " " << year << std::endl;
	std::cout << "Power: " << power << " Total pistons: " << pistons.size() << std::endl;
}

void Engine::addPiston(const Piston& piston) {
	pistons.push_back(piston);
}
