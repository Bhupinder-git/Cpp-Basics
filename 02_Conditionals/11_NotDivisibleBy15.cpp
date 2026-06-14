#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

    if((n % 3 == 0 || n % 5 == 0) && n % 15 != 0)
        cout << "Divisible by 5 or 3 but not by 15" << endl;

    return 0;
}