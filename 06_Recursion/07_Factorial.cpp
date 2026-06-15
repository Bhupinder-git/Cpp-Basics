#include <iostream>
using namespace std;

int fact(int n){
    // Base Case :
    if(n == 0 || n == 1) return 1;

    // recursive call
    return n * fact(n-1);
}

int main(){

    int n;
    cout << "Enter any integer : ";
    cin >> n;

    cout << "Factorial(" << n << ") : " << fact(n) << endl;

    return 0;
}