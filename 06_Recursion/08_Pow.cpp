#include <iostream>
using namespace std;

int poW(int a, int b){
    // Base Case : 
    if(b == 0) return 1;

    // Recursive calls
    return a * poW(a, b-1);
}

int main(){

    int a, b;

    cout << "Enter base : ";
    cin >> a;

    cout << "Enter power : ";
    cin >> b;

    cout << a << " raised to power " << b << " is " << poW(a, b) << endl;

    return 0;
}