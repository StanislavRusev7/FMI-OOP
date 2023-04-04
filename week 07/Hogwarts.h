#ifndef HOGWARTS_H
#define HOGWARTS_H

#include <iostream>
#include <string>

#include "Power.h"
#include "Student.h"

class Hogwarts {
private:
	Student* students;
	int studentCount;
	int maxStudentCount;

	void copy(const Hogwarts& other);
	void destroy();

public:
	Hogwarts();
	Hogwarts(const Hogwarts& other);
	Hogwarts(Hogwarts&& other);
	Hogwarts& operator=(const Hogwarts& other);
	Hogwarts& operator=(Hogwarts&& other);
	~Hogwarts();

	friend std::ostream& operator<<(std::ostream& out, const Hogwarts& hogwarts);

	void addStudent(const Student& student);
	void assignHouse(const std::string& studentName, const std::string& house) const;
	void givePower(const std::string& name, const Power& power) const;

	int getHouseStudentsCount(const std::string& house) const;
	Student* getFirstStudent(const std::string& house) const;
	const Student* getStudents() const;
	bool removeStudent(const std::string& name);

	int getStudentCount() const;
};

#endif  // HOGWARTS_H
