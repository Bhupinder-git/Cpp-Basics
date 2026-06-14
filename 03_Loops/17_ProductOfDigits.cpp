#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter any integer : ";
    cin >> n;

    int prod = 1;

    while(n){
        int last_digit = n % 10; 
        prod *= last_digit;
        n = n / 10;
    }

    cout << "Product : " << prod << endl;

    return 0;
}