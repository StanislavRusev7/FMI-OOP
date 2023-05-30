#include "YesNoQuestion.h"
#include <iostream>

YesNoQuestion::YesNoQuestion(std::string& question, double points, const std::string& ans): Question(question, points) {

	if (Question::validYesNoAnswer(ans)) {
		this->actualAnswer = ans;
	} else {
		throw std::exception("Bad argument");
	}

}

void YesNoQuestion::ask() {

	this->print();
	std::cout << "Answer with yes or no: ";
	std::getline(std::cin, this->givenAnswer);

}

double YesNoQuestion::grade() {
	if (Question::correctYesNoAnswer(givenAnswer, actualAnswer == YES)) {
		return this->points;
	}
	else {
		return 0;
	}
}


