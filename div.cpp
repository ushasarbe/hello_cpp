#include<iostream>
#include "div.hpp"

int divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0; // or handle error appropriately
    }
    int quotient = a / b;
    std::cout << "The quotient is: " << quotient << std::endl;
    return quotient;
}