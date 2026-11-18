#include <iostream>

int main(){
    int month;
    std::cout << "enter a number  representing a month 1 through 12" << std::endl;
    std::cin >> month;
    switch(month){
        case 1:
            std::cout << "the month is january" << std::endl;
            break;
        case 2:
            std::cout << "the month is feb" << std::endl;
            break;
        case 3:
            std::cout << "the month is march" << std::endl;
            break;
        case 4:
            std::cout << "the month is april" << std::endl;
            break;
        case 5:
            std::cout << "the month is may" << std::endl;
            break;
        case 6:
            std::cout << "the month is june" << std::endl;
            break;
        case 7:
            std::cout << "the month is july" << std::endl;
            break;
        case 8:
            std::cout << "the month is august" << std::endl;
            break;
        case 9:
            std::cout << "the month is september" << std::endl;
            break;
        case 10:
            std::cout << "the month is november" << std::endl;
            break;
        case 11:
            std::cout << "the month is october" << std::endl;
            break;
        case 12:
            std::cout << "the month is december" << std::endl;
            break;
        default:
            std::cout << "enter a valid input" << std::endl;
        }
    return 0;
}