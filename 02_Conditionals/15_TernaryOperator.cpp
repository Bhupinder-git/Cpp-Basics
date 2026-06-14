#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter age : ";
    cin >> n;

    (n >= 18) ? cout << "Can Vote" : cout << "Cannot Vote" ;

    return 0;
}