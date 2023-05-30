#ifndef _YESNOQUESTION_H_
#define _YESNOQUESTION_H_
#include "Question.h"

class YesNoQuestion: public Question {
private:

	std::string actualAnswer;
	std::string givenAnswer;

public:

	YesNoQuestion(std::string& question, double points, const std::string& ans);
	void ask() override;
	double grade() override;

};

#endif

