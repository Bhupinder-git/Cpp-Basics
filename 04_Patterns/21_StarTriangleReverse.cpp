#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter the no of rows : ";
    cin >> n;

    for(int i = 1; i <= n; i++){ // rows
        for(int k = 1; k <= n - i; k++){ // spaces
            cout << "  ";
        }
        for(int j = 1; j <= i; j++){ // stars
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}