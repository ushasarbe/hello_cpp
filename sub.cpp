#include<iostream>
#include "sub.hpp"

int sub(int a, int b) {
    int difference = a - b;
    std::cout << "The difference is: " << difference << std::endl;
    return difference;
}