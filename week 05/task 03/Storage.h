#ifndef _STORAGE_HPP
#define _STORAGE_HPP
#include "Shoe.h"

class Storage {

public:
	
	Storage(int maxCount);
	~Storage();
	Storage(const Storage& other);
	Storage& operator=(const Storage& other);
	bool contains(const Shoe& shoe);
	void addNew(const Shoe& shoe);
	void sell(const Shoe& shoe);

private:
	void copy(const Storage& other);
	void destroy();

	Shoe* shoes;
	int maxCount;
	int currentCount;

};

#endif
