#ifndef _FUELTANK_H_
#define _FUELTANK_H_
#include "CarPart.h"

template <typename T1>
class FuelTank : public CarPart {
private:

	int capacity;
	T1 fuel;

public:

	FuelTank(const char* manufacturer, unsigned year, int capacity, T1 fuel);
	void display() const override;

};

#endif 

template<typename T1>
FuelTank<T1>::FuelTank(const char* manufacturer, unsigned year, int capacity, T1 fuel): CarPart("FuelTank", manufacturer, year) {

	this->capacity = capacity;
	this->fuel = fuel;

}

template<typename T1>
void FuelTank<T1>::display() const {
	std::cout << "Id: " << id << std::endl;
	std::cout << name << " " << manunfacturer << " " << year << std::endl;
	std::cout << "Capacity: " << capacity << " Fuel: " << fuel << std::endl;
}
