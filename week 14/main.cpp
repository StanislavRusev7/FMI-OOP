#include <iostream>
#include "YesNoQuestion.h"
#include "MultipleChoiceQuestion.h"
#include "OpenQuestion.h"
#include "QuestionFactory.h"

int main() {
    std::string question = "Are you ready kids?";
    std::vector<std::string> answers;
    answers.push_back("Ay, ay captain!");
    answers.push_back("No, no");
    answers.push_back("Spongebob sucks!");
    answers.push_back("Yes");

    std::vector<bool> right;
    right.push_back(true);
    right.push_back(false);
    right.push_back(false);
    right.push_back(true);
    MultipleChoiceQuestion q(question, 100, answers, right);
    
    QuestionFactory qf;

    Question* created = qf.createQuestion();

    created->ask();
    std::cout << created->grade() << std::endl;

    delete created;

}
