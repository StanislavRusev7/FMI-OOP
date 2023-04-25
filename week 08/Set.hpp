#include <iostream>

const int MAX_SIZE = 100;

template <typename T>
class Set {

private:

	T* set;
	int maxSize;
	int currentSize;

	void resize();
	void copy(const Set<T>& other);

public:

	Set();
	Set(const Set<T>& other);
	~Set();
	Set<T>& operator=(const Set<T>& other);
	void add(const T element);
	bool isEmpty() const;
	void print() const;
	bool contains(const T& other) const;

	Set<T> operator+(const Set<T>& other) const {
		Set<T> result;

		for (int i = 0; i < currentSize; i++) {
			result.add(set[i]);
		}

		for (int i = 0; i < other.currentSize; i++) {
			result.add(other.set[i]);
		}

		return result;
	}

	bool operator<(const Set<T>& other) {
		for (int i = 0; i < currentSize; i++) {
			if (!other.contains(set[i])) {
				return false;
			}
		}

		return true;
	}

};

template<typename T>
void Set<T>::resize() {
	maxSize *= 2;
	T* temp = new T[maxSize];
	for (int i = 0; i < currentSize; i++)
		temp[i] = set[i];

	delete[] set;
	set = temp;
	
}

template<typename T>
void Set<T>::copy(const Set<T>& other) {
	currentSize = other.currentSize;
	maxSize = other.maxSize;
	set = new T[maxSize];
	for (int i = 0; i < currentSize; i++) {
		set[i] = other.set[i];
	}
}

template<typename T>
Set<T>::Set() {
	currentSize = 0;
	maxSize = MAX_SIZE;
	set = new T[MAX_SIZE];
}

template<typename T>
Set<T>::Set(const Set<T>& other) {
	copy(other);
}

template<typename T>
Set<T>::~Set() {
	delete[] set;
	set = nullptr;
}

template<typename T>
Set<T>& Set<T>::operator=(const Set<T>& other) {
	if (this != &other) {
		delete[] set;
		copy(other);
	}

	return *this;
}

template<typename T>
void Set<T>::add(const T element) {
	if (contains(element)) {
		return;
	}

	if (currentSize == maxSize) {
		resize();
	}
	set[currentSize] = element;
	currentSize++;
}

template<typename T>
bool Set<T>::isEmpty() const {
	return currentSize == 0;
}

template<typename T>
void Set<T>::print() const {
	for (int i = 0; i < currentSize; i++) {
		std::cout << set[i] << std::endl;
	}
}

template<typename T>
bool Set<T>::contains(const T& other) const {
	for (int i = 0; i < currentSize; i++) {
		if (set[i] == other) {
			return true;
		}
	}
	return false;
}
