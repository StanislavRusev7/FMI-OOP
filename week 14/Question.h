#ifndef _QUESTION_H_
#define _QUESTION_H_
#include <string>

class Question {
protected:

	std::string question;
	double points;

public:
	static const std::string YES;
	static const std::string NO;

	Question(std::string& question, double points);
	virtual void ask() = 0;
	virtual double grade() = 0;
	void print() const;
	static bool validYesNoAnswer(const std::string& ans);
	static bool correctYesNoAnswer(const std::string& ans, bool correctIsYes);


};

#endif

