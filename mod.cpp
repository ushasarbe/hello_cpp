#include<iostream>
#include "mod.hpp"

int mod(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0; // or handle error appropriately
    }
    int remainder = a % b;
    std::cout << "The remainder is: " << remainder << std::endl;
    return remainder;
}