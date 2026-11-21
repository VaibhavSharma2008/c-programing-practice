#include <iostream>

int main(){
    srand(time(NULL));

    int dice=(rand()%6)+1;
    std::cout << dice << std::endl;
    return 0;
}