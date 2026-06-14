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
        for(int j = 1; j <= 2*i - 1; j++){
            cout << "* ";
        }cout << endl;
    }

    for(int i = 1; i < n; i++){
        for(int k = 1; k <= i; k++){
            cout << "  ";
        }
        for(int j = 1; j <= 2*(n-i) - 1; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}