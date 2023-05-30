#include "OpenQuestion.h"
#include <iostream>

OpenQuestion::OpenQuestion(std::string& question, double points): Question(question, points) {
}

void OpenQuestion::ask() {
	this->print();
	std::getline(std::cin, answer);
}

double OpenQuestion::grade() {
	std::cout << "Question: ";
	this->print();
	std::cout << "Given answer: " << answer << std::endl;
	if (answer == "") {
		return 0;
	}
	std::cout << "Enter percents: ";
	double percent;
	std::cin >> percent;

	return (points / 100) * percent;
}


