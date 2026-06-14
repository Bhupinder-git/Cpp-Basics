#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter an integer : ";
    cin >> n;

    // if(n < 0) cout << "Absolute Value : " << (-1) * (n) << endl;
    // else cout << "Absolute Value : " << n << endl;


    // if we want to permanently change n then
    if(n < 0) n = n * (-1);

    cout << n << endl;

    return 0;
}