#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int main(){

    int a, b;

    cout << "Enter first no : ";
    cin >> a;

    cout << "Enter second no : ";
    cin >> b;

    int res = sum(a,b);

    cout << "Sum : " << res << endl;

    return 0;
}