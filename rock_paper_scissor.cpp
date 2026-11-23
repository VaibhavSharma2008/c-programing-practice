#include <iostream>
#include <ctime>

char get_user_choice();
char get_computer_choice();
void show_choice(char player_choice,char comp_choice);
char declare_winner(char player_choice, char comp_choice);


int main(){ 
    char player_choice;
    char comp_choice;
    int player_score=0;
    int comp_score=0;
    do{
        char winner;
        player_choice=get_user_choice();
        comp_choice=get_computer_choice();
        show_choice(player_choice,comp_choice);
        winner=declare_winner(player_choice,comp_choice);
        switch(winner){
            case 'W':
                player_score++;
                break;
            case 'L':
                comp_score++;
                break;
        }
    }while(player_score < 3 && comp_score < 3);
    if(player_score==3){
        std::cout << "******************ROCK**PAPER*SCISSOR**GAME******************" << std::endl;
        std::cout << "YOU WON THIS MATCH" << std::endl;
        std::cout << "******************ROCK**PAPER*SCISSOR**GAME******************" << std::endl;
    }
    else if (comp_score==3){
        std::cout << "*******************" << std::endl;
        std::cout << "YOU LOST THIS MATCH" << std::endl;
        std::cout << "*******************" << std::endl;
    }
    return 0;
}


char get_user_choice(){
    int player_choice;
    std::string validity="valid";
    std::cout << "******ROCK**PAPER*SCISSOR**GAME*******" << std::endl;
    std::cout << "make you choice:-" <<std::endl;
    std::cout << "1. ROCK" <<std::endl;
    std::cout << "2. PAPER" << std::endl;
    std::cout << "3. SCISSOR" <<std::endl;
    std::cin >> player_choice;
    do{
        switch(player_choice){
            case 1:
                validity="valid";
                return 'R';
            case 2: 
                validity="valid";
                return 'P';
            case 3:
                validity="valid";
                return 'S';
            default:
                validity="invalid";
                std::cout << "invalid response enter again" << std::endl;

                break;
            }
        }while(validity=="invalid");
    };


char get_computer_choice(){
    srand(time(0));
    int random_num=rand()%3+1;
    switch(random_num){
        case 1:
            return 'R';
        case 2:
            return 'P';
        case 3:
            return 'S';
    }

};

void show_choice(char player_choice, char comp_choice){
    std::cout << "*****choices*****" << std::endl;
    std::cout << "computer's choice: " << comp_choice <<std::endl;
    std::cout << "your choice: " << player_choice << std::endl;
};
char declare_winner(char player_choice, char comp_choice){
    if(player_choice=='R'){
        if(comp_choice=='P'){
            std::cout << "YOU LOSE" << std::endl;
            return 'L';
        }
        else if(comp_choice=='S'){
            std::cout << "YOU WIN" << std::endl;
            return 'W';
        }
        else{
            std::cout << "TIE" <<std::endl;
            return 'T';
        }
    }
    else if(player_choice=='P'){
        if(comp_choice=='S'){
            std::cout << "YOU LOSE" << std::endl;
            return 'L';
        }
        else if(comp_choice=='R'){
            std::cout << "YOU WIN" << std::endl;
            return 'W';
        }
        else{
            std::cout << "TIE" <<std::endl;
            return 'T';
        }
    }
    else{
        if(comp_choice=='R'){
            std::cout << "YOU LOSE" << std::endl;
            std::cout << "**********" << std::endl;
            return 'L';
        }
        else if(comp_choice=='P'){
            std::cout << "YOU WIN" << std::endl;
            std::cout << "**********" << std::endl;
            return 'W';
        }
        else{
            std::cout << "TIE" <<std::endl;
            std::cout << "**********" << std::endl;
            return 'T';
        }
    }
};