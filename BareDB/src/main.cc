#include <iostream>
#include "calc/Calc.h"
 
int main() {
    Calc calc;
    std::cout << "Hello World 12+7 = " << calc.add(12,7) << std::endl;
    std::cout << "C++ Standard: " << __cplusplus << std::endl;
}