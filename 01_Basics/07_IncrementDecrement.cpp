#include <iostream>
using namespace std;

int main(){

    int x = 5;

    cout << x << endl; // 5 
    cout << x++ << endl; // 5, x = 6
    cout << ++x << endl; // x = 7, 7
    cout << x << endl; // 7

    return 0;
}