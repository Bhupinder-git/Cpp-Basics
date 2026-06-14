#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    cout << "Enter c : ";
    cin >> c;

    if(a > b){
        if(a > c)
            cout << "A is the greatest" << endl;
        else
            cout << "C is the greatest or equal" << endl;
    }else{
        if(b > c)
            cout << "B is the greatest" << endl;
        else 
            cout << "C is the greatest or equal" << endl;
    }

    return 0;
}