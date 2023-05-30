#include "QuestionFactory.h"
#include "YesNoQuestion.h"
#include <iostream>

Question* QuestionFactory::createQuestion() {
    std::string type;

    std::cout << "Enter question type: ";
    std::getline(std::cin, type);

    if (type == "YesNo") {

        std::string question, answer;
        double points;
        std::cout << "Enter question: ";
        std::getline(std::cin, question);
        std::cout << "Enter points: ";
        std::cin >> points;
        std::cin.ignore();
        std::cout << "Enter yes or no for right answer: ";
        std::getline(std::cin, answer);

        return new YesNoQuestion(question, points, answer);

    } else {
        return nullptr;
    }
}
