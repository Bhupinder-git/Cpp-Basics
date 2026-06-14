#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter an integer : ";
    cin >> n;

    if(n % 3 == 0 || n % 5 == 0)
        cout << "Divisible by 3 or 5" << endl;
    else 
        cout << "Not Divisible" << endl;
    
    return 0;
}