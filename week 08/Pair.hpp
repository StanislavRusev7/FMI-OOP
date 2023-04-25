#include <iostream>

template <typename T1, typename T2>
class Pair {
private:

	T1 key;
	T2 value;

public:

	T1 getKey() const { return key; }
	T2 getValue() const { return value; }

};