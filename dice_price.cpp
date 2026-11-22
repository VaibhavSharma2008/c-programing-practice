#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int randNum= rand()%6+1;
    switch (randNum){
        case 1: std::cout << "you won a pencil" << std::endl;
                break;
        case 2: std::cout << "you won a bag" << std::endl;
                break;
        case 3: std::cout << "you won a pair of headphones" <<std::endl;
                break;
        case 4: std::cout << "you won a cruise trip" << std::endl;
                break;
        case 5: std::cout << "you won a laptop" << std::endl;
                break;
        case 6: std::cout << "you won a trip to paris" << std::endl;
                break;
    };
    return 0;
}