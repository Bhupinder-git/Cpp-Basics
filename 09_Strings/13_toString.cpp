#include <iostream>
using namespace std;

int main(){

    int num = 12345;
    string str = to_string(num); // coverts the integer to string

    cout << (str) << endl;

    str = str + "Hello";

    cout << str << endl;

    return 0;
}