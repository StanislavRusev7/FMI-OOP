#ifndef _PET_H_
#define _PET_H_
#include "Animal.h"
#include <iostream>

class Pet: public Animal {
private:

	char* owner;
	unsigned phone;

	void copy(const Pet& other);
public:

	Pet(const char* name, unsigned age, const char* owner, unsigned phone);
	Pet(const Pet& other);
	Pet& operator=(const Pet& other);
	~Pet();

	friend std::ostream& operator<<(std::ostream& out, const Pet& pet);

};

#endif 

