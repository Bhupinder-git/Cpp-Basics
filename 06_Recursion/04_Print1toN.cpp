#include <iostream>
using namespace std;

void print(int n){
    // Base Case :
    if(n == 0) return;

    // recursive call
    print(n - 1);

    // work
    cout << n << endl;
}

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

    print(n);

    return 0;
}