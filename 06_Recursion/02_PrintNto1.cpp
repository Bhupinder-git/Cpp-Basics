#include <iostream>
using namespace std;

void print(int n){
    // Base Case : 
    if(n == 0) return;

    // work
    cout << n << endl;

    // recursive call
    print(n - 1);
}

int main(){

    int n;

    cout << "Enter n : ";
    cin >> n;

    print(n);

    return 0;
}