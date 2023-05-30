#ifndef _MCQ_H_
#define _MCQ_H_
#include "Question.h"
#include <vector>

class MultipleChoiceQuestion : public Question {
private:

	std::vector<std::string> answers;
	std::vector<bool> rightAnswers;
	int givenRightAnswers;

public:

	MultipleChoiceQuestion(std::string& question, double points, std::vector<std::string> answers, std::vector<bool> rightAnswers);
	void ask() override;
	double grade() override;

};

#endif

