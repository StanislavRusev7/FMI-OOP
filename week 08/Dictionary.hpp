#include <iostream>
#include "Pair.hpp"

const int MAX_SIZE = 100;

template <typename T1, typename T2>
class Dictionary {
private:

	Pair<T1, T2>* map[MAX_SIZE];
	int currentSize;

public:

	Dictionary();
	~Dictionary();

};

template<typename T1, typename T2>
Dictionary<T1, T2>::Dictionary() {
	for (int i = 0; i < MAX_SIZE; i++) {
		map[i] = nullptr;
	}
	currentSize = 0;
}

template<typename T1, typename T2>
Dictionary<T1, T2>::~Dictionary() {
	for (int i = 0; i < MAX_SIZE; i++) {
		if (map[i] != nullptr) {
			delete map[i];
		}
	}
}
