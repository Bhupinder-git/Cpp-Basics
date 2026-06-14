#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter any integer : ";
    cin >> n;

    int new_n = n;
    int res = 0;

    while(n){
        int last_digit = n % 10;
        res = (res * 10) + last_digit;
        n = n / 10;
    }

    cout << "Sum of " << new_n << " & " << res << " : " << new_n + res << endl;
}