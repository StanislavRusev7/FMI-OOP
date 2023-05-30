#include "Question.h"
#include <iostream>

const std::string Question::YES = "yes";
const std::string Question::NO = "no";

Question::Question(std::string& question, double points) {
	this->question = question;
	this->points = points;
}

void Question::print() const {
	std::cout << question  << ", points: " << points << std::endl;
}

bool Question::validYesNoAnswer(const std::string& ans) {
	return ans == YES || ans == NO;
}

bool Question::correctYesNoAnswer(const std::string& ans, bool correctIsYes) {
	return (correctIsYes == true && ans == YES) || (correctIsYes == false && ans == NO);
}
