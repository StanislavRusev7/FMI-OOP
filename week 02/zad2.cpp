#include <iostream>

class Triangle {

private:
    double a;
    double b;
    double c;

    double alpha;
    double beta;
    double gamma;

public:

    void initialize() {
        std::cout << "Enter BC: ";
        std::cin >> a;
        std::cout << "Enter AC: ";
        std::cin >> b;
        std::cout << "Enter AB: ";
        std::cin >> c;

        // I should do more validations, but I dont have the time :D
        do {
            std::cout << "Enter alpha: ";
            std::cin >> alpha;
        } while (alpha <= 0 || alpha >= 180);
        do {
            std::cout << "Enter beta: ";
            std::cin >> beta;
        } while (beta <= 0 || beta >= 180);
        do {
            std::cout << "Enter gamma: ";
            std::cin >> gamma;
        } while (gamma <= 0 || gamma >= 180);
    }

    bool isRightAngled() const {
        return alpha == 90 || beta == 90 || gamma == 90;
    }

    bool isIsosceles() const {
        return a == b || b == c || a == c;
    }

    double getParameter() const {
        return a + b + c;
    }

    double getArea() const {
        double semiParameter = getParameter() / 2;

        return sqrt(semiParameter * (semiParameter - a) * (semiParameter - b) * (semiParameter - c));
    }

    double getHeight(char side) {
        switch (side) {
            case 'a': return getArea() * 2 / a; break;
            case 'b': return getArea() * 2 / b; break;
            default: return getArea() * 2 / c; break;

        }
    }
};

int main() {
    Triangle t;

    t.initialize();
    std::cout << t.isIsosceles() << std::endl;
}