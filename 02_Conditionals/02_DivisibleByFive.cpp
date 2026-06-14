#include <iostream>
using namespace std;

int main(){

    int x;

    cout << "Enter an integer : ";
    cin >> x;

    if(x % 5 == 0) 
        cout << "Divisible by 5" << endl;
    else    
        cout << "Not Divisible by 5" << endl;

    return 0;
}