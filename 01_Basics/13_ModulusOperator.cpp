#include <iostream>
using namespace std;

int main(){

    int x = 5;
    int y = 3;

    cout << "Quotient : " << x / y << endl; // returns quotient
    cout << "Remainder : " <<  x % y << endl; // returns remainder
    cout << "Dividend : " << (y * (x/y)) + (x % y) << endl;

    // Some Imp Points : 
    // 1. a % b = a (if a <<< b)
    cout << 2 % 8 << endl;

    // 2. a % a = a 
    cout << 8 % 8 << endl;

    // 3. a % (-b) = a % b
    cout << 8 % (-3) << endl;

    // 4. (-a) % b = -(a % b)
    cout << -(8) % 3 << endl; 
    
    return 0;
}