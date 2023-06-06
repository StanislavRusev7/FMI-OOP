#ifndef _RELATONELEMENT_HPP_
#define _RELATIONELEMENT_HPP_
#include <string>
#include <iostream>

template <typename T>
class RelationElement {

private:

	T subject;
	T object;
	std::string relation;

public:

	RelationElement(T subject, T object, const char* relation) {
		this->subject = subject;
		this->object = object;
		this->relation = relation;
	}

	void print() {
		std::cout << subject << " " << relation << " " << object << std::endl;
	}
};

template<>
class RelationElement<int> {
private:

	int subject;
	int object;
	std::string relation;

public:

	RelationElement(int subject, int object, const char* relation) {
		this->subject = subject;
		this->object = object;
		this->relation = relation;
	}

	void print() {
		std::cout << subject << " " << relation << " " << object << std::endl;
	}

	RelationElement operator*(const RelationElement& other) {
		if (this->object != other.subject) {
			return *this;
		}
		else {
			std::string newRelation = relation + std::to_string(object) + ", which is " + other.relation;
			RelationElement<int> element(this->subject, other.object, newRelation.c_str());
			return element;
		}
	}

};

#endif