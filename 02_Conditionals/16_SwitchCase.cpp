#include <iostream>
using namespace std;

int main(){

    int x, y;
    char op;
    cin >> x;
    cin >> op;
    cin >> y;

    switch(op){
        case '+' : cout << x + y << endl;
                break;
        case '-' : cout << x - y << endl;
                break;
        case '*' : cout << x * y << endl;
                break;
        case '/' : cout << x / y << endl;
                break;
        default : cout << "Enter Valid Operator" << endl;
    };

    return 0;
}