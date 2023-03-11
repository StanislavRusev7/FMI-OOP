#include <iostream>

const int MAX_SIZE = 21;

class Waffle {

private:
    char name[MAX_SIZE];
    int grams;
    double defaultPrice;
    double clientPrice;

public:

    void initialize() {

        std::cout << "Enter waffle name: ";
        std::cin.getline(name, MAX_SIZE);
        std::cout << "Enter waffle grams: ";
        std::cin >> grams;
        std::cout << "Enter default price: ";
        std::cin >> defaultPrice;
        std::cout << "Enter client price: ";
        std::cin >> clientPrice;

    }

    void showName() const {
        std::cout << "Waffle: " << name << std::endl;
    }

    int getGrams() const {
        return grams;
    }

    double getDefaultPrice() const {
        return defaultPrice;
    }

    double getClientPrice() const {
        return clientPrice;
    }

};

class WaffleShop {

    Waffle currentlySoldWaffle;
    int currentWaffleCount;
    int maxWaffleCount;
    double currentEarnings;
    double currentExpenses;

public:

    void initialize() {

        this->currentlySoldWaffle.initialize();
        std::cout << "Enter maximum waffle count: ";
        std::cin >> this->maxWaffleCount;
        this->currentWaffleCount = 0;
        this->currentEarnings = 0;
        this->currentExpenses = 0;

    }

    void orderWaffles(int orderedCount) {

        if (currentWaffleCount > 0 || maxWaffleCount < orderedCount) {
            throw std::exception("Invalid order!");
        }

        this->currentWaffleCount += orderedCount;
        this->currentExpenses += orderedCount * currentlySoldWaffle.getDefaultPrice();

    }

    void sellWaffle() {

        if (currentWaffleCount < 1) {
            throw std::exception("The shop is empty!");
        }

        this->currentWaffleCount--;
        this->currentEarnings += currentlySoldWaffle.getClientPrice();

    }

    void showWaffle() const {
        currentlySoldWaffle.showName();
        std::cout << "Current waffle count: " << currentWaffleCount << std::endl;
        std::cout << "Totals grams: " << currentWaffleCount * currentlySoldWaffle.getGrams() << std::endl;
    }

    void showCurrentEarnings() const {
        std::cout << "Current earnings: " << currentEarnings - currentExpenses << std::endl;
    }

};



int main() {
    try
    {
        WaffleShop waffleShop;
        waffleShop.initialize();
        waffleShop.showWaffle();
        waffleShop.orderWaffles(10);
        for (int i = 0; i < 5; i++) {
            waffleShop.sellWaffle();
        }
        waffleShop.showWaffle();
        waffleShop.showCurrentEarnings();

    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

}
