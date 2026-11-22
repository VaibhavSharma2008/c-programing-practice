#include <iostream>

double addition(double num1, double num2){
    return num1+num2;
}
std::string name(std::string first_name, std::string last_name){
    return first_name + " " + last_name; 
}
int main(){
    std::cout << addition(2.23,3.7777) << std::endl;
    std::cout << name("dave", "jonson") <<std::endl;
    return 0;
}