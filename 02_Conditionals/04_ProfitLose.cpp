#include <iostream>
using namespace std;

int main(){

    int cp, sp, profit, loss;

    cout << "Enter cost price : ";
    cin >> cp;

    cout << "Enter selling price : ";
    cin >> sp;

    if(sp - cp > 0) cout << "Profit : " << sp - cp << endl;
    else if(sp - cp == 0) cout << "No Profit No Loss" << endl;
    else cout << "Loss : " << cp - sp << endl;

    return 0;
}