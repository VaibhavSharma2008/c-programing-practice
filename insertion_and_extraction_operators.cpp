#include <iostream>

int main(){
    std::string name;
    int age;
    std::cout << "what is your age?" << std::endl;
    std::cin >> age;
    std::cout << "what is your full name?" << std::endl;
    std::getline(std::cin >> std::ws,name);
    std::cout << "hello there " << name << " you are " << age << " years old" <<std::endl;
    return 0;
}