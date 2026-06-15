#include <iostream>
using namespace std;

int poW(int a, int b){
    // Base Case : 
    if(b == 0) return 1;

    // Recursive calls : 
    if(b % 2 == 0){ // even
        return poW(a, b/2) * poW(a, b/2);
    }else{
        return a * poW(a, b/2) * poW(a, b/2);
    }
}

int main(){

    int a, b;

    cout << "Enter base : ";
    cin >> a;

    cout << "Enter power : ";
    cin >> b;

    cout << a << " raised to power " << b << " is " << poW(a,b) << endl;

    return 0;
}