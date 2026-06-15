#include <iostream>
using namespace std;

int fib(int n){
    // Base Case : 
    if(n == 0 || n == 1) return n;

    // recursive call
    return fib(n-1) + fib(n-2);
}

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

    cout << "Fibonacci(" << n << ") : " << fib(n) << endl;

    return 0;
}