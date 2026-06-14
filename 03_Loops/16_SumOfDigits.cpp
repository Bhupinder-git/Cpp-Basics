#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter any integer : ";
    cin >> n;

    int sum = 0;
    while(n){
        int last_digit = n % 10;
        sum += last_digit;
        n = n / 10;
    }

    cout << "Sum : " << sum << endl;

    return 0;
}