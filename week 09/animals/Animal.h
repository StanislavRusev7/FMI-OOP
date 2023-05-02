#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <iostream>

class Animal {

private:

	void copy(const Animal& other);

protected:

	char* name;
	unsigned age;

public:

	Animal(const char* name, unsigned age);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	~Animal();

	friend std::ostream& operator<<(std::ostream& out, const Animal& animal);
};

#endif

