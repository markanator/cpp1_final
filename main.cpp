#include "CoffeeMachine.h"
#include <iostream>

CoffeeMachine kureg;

int main() {
    kureg.startProcess();
    std::cout << "Thanks for stopping by!" << std::endl;
    return 0;
}
