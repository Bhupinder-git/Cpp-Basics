#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter any integer : ";
    cin >> n;

    bool isPrime = true;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(n == 1 || n == 0) cout << n << " is neither prime nor composite" << endl;
    else if(isPrime) cout << n << " is prime no." << endl;
    else cout << n << " is not a prime no." << endl;

    return 0;
}