#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter any integer : ";
    cin >> n;

    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
        cout << "Factorial(" << i << ") : " << fact << endl;
    }

    return 0;
}