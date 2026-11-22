#include <iostream>

int main(){
    int num;
    int guess;
    int tries;
    int level;
    tries=0;
    srand(time(0));
    std::cout << "*******NUMBER guessing GAME********" << std::endl;
    std::cout << "ENTER THE LEVEL OF THE GAME" << std::endl;
    std::cin >> level;
    num=(rand()%level)+1;
    std::cout << "a random number has been generated between 0 and " << level << std::endl;
    while (guess!=num){
        std::cout << "******************************" << std::endl;
        std::cout << "enter a number to make your guess" << std::endl;
        std::cin >> guess;
        if(guess==num){
            std::cout << "******************************" << std::endl;

            std::cout << "you have entered the right number" << std::endl;
            std::cout << "******************************" << std::endl;
            std::cout << "          YOU WON" << std::endl;
            std::cout << "******************************" << std::endl;
            std::cout << "you made " << tries << " tries to guess the number" << std::endl;
            std::cout << "******************************" << std::endl;
            guess=num;
            break;
        }
        else if(num>guess){
            std::cout << "******************************" << std::endl;
            std::cout << "          WRONG" << std::endl;
            std::cout << "******************************" << std::endl;
            std::cout << "        GO HIGHER" << std::endl;
            tries++;
        }
        else{
            std::cout << "******************************" << std::endl;
            std::cout << "         WRONG" << std::endl;
            std::cout << "******************************" << std::endl;
            std::cout << "        GO LOWER" <<std::endl;
            tries++;
        };
    };
    return 0;
}