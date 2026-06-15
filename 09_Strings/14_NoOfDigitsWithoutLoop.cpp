#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter any integer : ";
    cin >> n;

    string str = to_string(n);

    cout << "No of digits : " << str.length() << endl;

    return 0;
}