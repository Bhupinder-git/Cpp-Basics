#include <iostream>
using namespace std;

int fact(int n){
    int res = 1;
    for(int i = 1; i <= n; i++)
        res *= i;
    return res;
}

int nCr(int n, int r){
    int factN = fact(n);
    int factR = fact(r);
    int factNR = fact(n-r);
    return factN / (factR * factNR);
}

int main(){

    int n;

    cout << "Enter the no of rows : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int k = 0; k <= n - i; k++){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){
            cout << nCr(i,j) << " ";
        }cout << endl;
    }

    return 0;
}