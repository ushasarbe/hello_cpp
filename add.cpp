#include<iostream>
#include "add.hpp"


int add(int a, int b)
{
    int sum = a+b;
    std::cout << "The sum is: " << sum << std::endl;
    return sum;
}