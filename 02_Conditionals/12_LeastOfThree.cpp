#include <iostream>
using namespace std;

int main(){

    int a, b, c;

    cout << "Enter first number : ";
    cin >> a;

    cout << "Enter second number : ";
    cin >> b;

    cout << "Enter third number : ";
    cin >> c;

    if(a < b){ // b can never be lowest
        if(a < c)
            cout << a << " is the least" << endl;
        else 
            cout << c << " is the least" << endl;
    }else{ // a can never be lowest
        if(b < c) 
            cout << b << " is the least" << endl;
        else 
            cout << c << " is the least" << endl;
    }

    return 0;
}