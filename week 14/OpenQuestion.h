#ifndef _OPENQUESTION_H_
#define _OPENQUESTION_H_
#include "Question.h"

class OpenQuestion : public Question {

private:

	std::string answer;


public:

	OpenQuestion(std::string& question, double points);
	void ask() override;
	double grade() override;

};


#endif

