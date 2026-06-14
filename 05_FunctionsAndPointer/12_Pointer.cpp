#include <iostream>
using namespace std;

int main(){

    int x = 5;
    int *ptr = &x;

    cout << "Address of x(&x) : " << &x << endl;
    cout << "Address of x(ptr) : " << ptr << endl;
    cout << "Address of ptr : " << &ptr << endl;
    cout << "x --> " << x << endl;
    
    // Accessing value using the de-reference operator
    cout << "x(*ptr) --> " << (*ptr) << endl;

    return 0;
}