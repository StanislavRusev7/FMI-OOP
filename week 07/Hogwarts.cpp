#include "Hogwarts.h"
#include "Power.h"
#include "Student.h"
#include <string>

const int MAX = 100;

void Hogwarts::copy(const Hogwarts& other) {
	students = new Student[other.maxStudentCount];
	studentCount = other.studentCount;
	maxStudentCount = other.maxStudentCount;
	for (int i = 0; i < studentCount; ++i) {
		students[i] = other.students[i];
	}
}

void Hogwarts::destroy() {
	delete[] students;
	studentCount = 0;
	maxStudentCount = 0;
}

Hogwarts::Hogwarts() {
	students = new Student[MAX];
	studentCount = 0;
	maxStudentCount = MAX;
}

Hogwarts::Hogwarts(const Hogwarts& other) {
	copy(other);
}

Hogwarts::Hogwarts(Hogwarts&& other) {

	studentCount = other.studentCount;
	students = other.students;
	maxStudentCount = other.maxStudentCount;

	other.studentCount = 0;
	other.maxStudentCount = 0;
	other.students = nullptr;

}

Hogwarts& Hogwarts::operator=(const Hogwarts& other) {
	if (this != &other) {
		destroy();
		copy(other);
	}
	return *this;
}

Hogwarts& Hogwarts::operator=(Hogwarts&& other) {
	if (this != &other) {
		destroy();
		studentCount = other.studentCount;
		students = other.students;
		maxStudentCount = other.maxStudentCount;

		other.studentCount = 0;
		other.maxStudentCount = 0;
		other.students = nullptr;
	}
	return *this;
}

Hogwarts::~Hogwarts() {
	destroy();
}

void Hogwarts::addStudent(const Student& student) {
	if (studentCount == maxStudentCount) {

		maxStudentCount += MAX;
		Student* copy = new Student[maxStudentCount];
		for (int i = 0; i < studentCount; i++) {
			copy[i] = students[i];
		}

		delete this->students;
		this->students = copy;
		students[studentCount] = student;
		studentCount++;


	} else {
		students[studentCount] = student;
		studentCount += 1;
	}
}

void Hogwarts::assignHouse(const std::string& studentName, const std::string& house) const {

	for (int i = 0; i < studentCount; i++) {
		if (students[i].getName() == studentName) {
			students[i].setHouse(house);
			break;
		}
	}
}

void Hogwarts::givePower(const std::string& name, const Power& power) const {

	for (int i = 0; i < studentCount; i++) {
		if (students[i].getName() == name) {
			students[i].setPower(&power);
		}
	}
}

int Hogwarts::getHouseStudentsCount(const std::string& house) const {
	int count = 0;

	for (int i = 0; i < studentCount; i++) {
		if (students[i].getHouse() == house) {
			count++;
		}
	}

	return count;
}

Student* Hogwarts::getFirstStudent(const std::string& house) const {
	for (int i = 0; i < studentCount; i++) {
		if (students[i].getHouse() == house) {
			return &students[i];
		}
	}
	return nullptr;
}

const Student* Hogwarts::getStudents() const {
	return students;
}

int Hogwarts::getStudentCount() const {
	return studentCount;
}

std::ostream& operator<<(std::ostream& out, const Hogwarts& hogwarts) {
	for (int i = 0; i < hogwarts.studentCount; i++) {
		out << hogwarts.students[i].getName() << " " << hogwarts.students[i].getHouse() << std::endl;
	}
	return out;
}
