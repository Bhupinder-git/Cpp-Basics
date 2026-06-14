#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter an integer : ";
    cin >> n;

    if(n > 99 && n < 1000) 
        cout << "Three-Digit Number" << endl;
    else 
        cout << "Not a three-digit number" << endl;

    return 0;
}