#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"
#include <iostream>
#include <cstring>

MyString::MyString() {
	string = new char[1];
	string[0] = '\0';
}

MyString::~MyString() {
	delete[] string;
}

MyString::MyString(MyString const& other) {
	string = new char[strlen(other.string) + 1];
	strcpy(string, other.string);
}

MyString::MyString(const char* str) {
	string = new char[strlen(str) + 1];
	strcpy(string, str);
}

int MyString::length() const{
	return strlen(string);
}

char& MyString::at(unsigned indx) {
	if (this->length() < indx) {
		throw std::exception("Bad index");
	}

	return string[indx];
}

int MyString::find(char c, unsigned startPos) {
	if (this->length() < startPos) {
		return -1;
	}

	for (int i = startPos; string[i] != '\0'; i++) {
		if (string[i] == c) {
			return i;
		}
	}

	return -1;
}

bool MyString::empty() const {
	return this->length() == 0;
}

MyString MyString::substr(unsigned pos, unsigned n) {
	if (pos < 0 || pos > this->length()) {
		throw std::exception("Bad position");
	}

	if (pos + n > this->length()) {
		return MyString(string + pos);
	} else {
		char* temp = new char[n - pos + 2];
		for (int i = 0; i < n - pos + 1; i++) {
			temp[i] = string[pos + i];
		}
		temp[n - pos + 1] = '\0';
		MyString str(temp);

		delete[] temp;
		return str;
	}
}

void MyString::append(const MyString& str) {

	MyString temp(this->string);
	delete[] string;
	string = new char[temp.length() + str.length() + 1];
	strcpy(string, temp.string);
	strcat(string, str.string);
}

void MyString::print() const {
	std::cout << string << std::endl;
}

MyString& MyString::operator=(MyString const& other) {
	if (this != &other) {

		delete[] string;
		string = new char[strlen(other.string) + 1];
		strcpy(string, other.string);
	}

	return *this;
}
