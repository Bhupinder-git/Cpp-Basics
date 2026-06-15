#include <iostream>
using namespace std;

void print(int i, int n){
    // Base Case : 
    if(i > n) return;

    // work
    cout << i << endl;
    
    // recursive call
    print(i+1, n);
}

int main(){

    int n;

    cout << "Enter n : ";
    cin >> n;

    print(1,n);

    return 0;
}