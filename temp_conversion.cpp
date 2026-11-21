#include <iostream>

int main(){
    std::string unit;
    double temp;
    double conversion;
    std::cout << "*********TEMP UNIT CONVERTER***********" << std::endl;
    std::cout << "C=celcius" <<std::endl;
    std::cout << "F=faranite" << std::endl;
    std::cout << "enter the unit" <<std::endl;
    std::cin >> unit;
    if(unit=="C" || unit =="c"){
        std::cout << "enter the temp in celcius" <<std::endl;
        std::cin >> temp;
        conversion=(temp*(9/5))+32;
        std::cout << conversion << " F" << std::endl;
    }
    else if(unit=="f" || unit=="F"){
        std::cout << "enter the temp in faranite" << std::endl;
        std::cin >> temp;
        conversion=(temp-32)*(5/9);
        std::cout << conversion << " C" << std::endl;
    }
    else{
        std::cout << "please enter a valid unit" <<std::endl;
    };
    return 0;
}