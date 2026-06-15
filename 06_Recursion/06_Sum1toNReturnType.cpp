#include <iostream>
using namespace std;

int sum(int n){
    // Base Case : 
    if(n == 0) return 0;

    // recursive call
    return n + sum(n - 1);
}

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

    cout << sum(n) << endl;

    return 0;
}