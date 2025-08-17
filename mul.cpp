#include<iostream>
#include "mul.hpp"

int mul(int a, int b) {
    int product = a * b;
    std::cout << "The product is: " << product << std::endl;
    return product;
}