#include <iostream>

using namespace std;

int main(){
    double x;
    double y;
    double result;
    string condition="y";
    while(condition=="y"){
        string opra;
        cout << "enter a value for y" << endl;
        cin >> y;
        cout << "enter a value for x" << endl;
        cin >> x;
        cout << "enter a operator(+,-,*,/)" << endl;
        cin >> opra;
        if(opra=="+"){
            result=x+y;
            cout << result << endl;
        }
        else if (opra=="-"){
            result=x-y;
            cout << result << endl;
        }
        else if (opra=="*"){
            result=x*y;
            cout << result << endl;
        }
        else if (opra=="/"){
            if (y==0){
                cout << "divisoin by 0 is not defined" << endl;
            }
            else{
                result=x/y;
                cout << result << endl;
            }
        }
        else{
            cout << "enter a valid operator" << endl;
        }
        cout << "to continue press 'y'. else 'n'";
        cin >> condition;
}
    return 0;
}