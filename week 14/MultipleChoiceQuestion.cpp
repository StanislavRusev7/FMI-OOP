#include "MultipleChoiceQuestion.h"
#include <iostream>

MultipleChoiceQuestion::MultipleChoiceQuestion(std::string& question, double points, std::vector<std::string> answers, std::vector<bool> rightAnswers): Question(question, points) {
	givenRightAnswers = 0;

	if (answers.size() > rightAnswers.size()) {
		answers.resize(rightAnswers.size());
	}
	else if (answers.size() < rightAnswers.size()) {
		rightAnswers.resize(answers.size());
	}

	this->answers = answers;
	this->rightAnswers = rightAnswers;
}

void MultipleChoiceQuestion::ask() {
	this->print();
	for (int i = 0; i < answers.size(); i++) {
		std::cout << answers[i] << std::endl;
	}

	for (int i = 0; i < answers.size(); i++) {
		std::cout << i + 1 << ": ";
		std::string givenAns;
		std::getline(std::cin, givenAns);
		if (Question::correctYesNoAnswer(givenAns, rightAnswers[i])) {
			givenRightAnswers++;
		}
	}
}

double MultipleChoiceQuestion::grade() {
	double total = 0;
	for (int i = 1; i <= givenRightAnswers; i++) {
		total += (points / i);
	}

	for (int i = 1; i <= answers.size() - givenRightAnswers; i++) {
		total -= (points / i);
	}

	return total;
	
}


