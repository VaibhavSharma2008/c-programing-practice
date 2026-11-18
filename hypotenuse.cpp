#include <iostream>
#include <cmath>

int main(){
    double x;
    double y;
    double hypotenuse;
    std::cout << "enter the perpendicular of the triangle" << std::endl;
    std::cin >> x;
    std::cout << "enter the base of the trinagle" << std::endl;
    std::cin >> y;
    hypotenuse =std::sqrt(pow(x,2)+std::pow(y,2));
    std::cout << "the hypotenuse of the triangle is " << hypotenuse << std::endl;
    return 0;
}