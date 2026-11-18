#include <iostream>

int main(){
    int question=22;
    int correct=13;
    double score=(double)correct/question * 100;
    std::cout << score <<std::endl;
    return 0;
}