#include <iostream>
using namespace std;

int main(){

    int x = 2, y = 5;

    cout << x << "  " << y << endl;

    // using extra variable
    int temp = x;
    x = y; 
    y = temp;

    cout << x << "  " << y << endl;
    
    // without extra variable
    x = x + y;
    y = x - y;
    x = x - y;
    
    cout << x << "  " << y << endl;

    return 0;
}