#include <iostream>
#include <cmath>

int main(){
    double x=3.23;
    double y=20.1;
    double z;
    z = std::max(x,y);
    std::cout << "the max between x and y is " << z << std::endl;
    z =std::min(x,y);
    std::cout << "the min between x and y is " << z << std::endl;
    z=std::pow(x,y);
    std::cout << x << " raise to thee power " << y << "is " << z << std::endl;
    z=std::abs(x);
    std::cout << "the absolute value of " << x << " is " << z << std::endl;
    z=std::sqrt(y);
    std::cout << "the square root of " << y << " is " << z << std::endl;
    z=std::round(x);
    std::cout << "the round-off value of " << x << " is " << z << std::endl;
    z=std::ceil(y);
    std::cout << "the ceild value of " << y << " is " << z << std::endl;
    z=std::floor(x);
    std::cout << "the floor value of " << x << " is " << z << std::endl;
    return 0; 
}   