#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter no of terms : ";
    cin >> n;

    int a = 1;
    int d = 2;

    // 1 3 5 7 9...

    // Method 1 : 
    // for(int i = 1; i <= n; i++){
    //     int an = a + (i - 1) * d;
    //     cout << an << " ";
    // }

    // Method 2 : 
    cout << "Ap1 : ";
    for(int i = 1; i <= 2*n - 1; i+=2){
        cout << i << " ";
    }cout << endl;

    // 4 7 10 13...
    cout << "Ap2 : ";
    for(int i = 4; i <= 3*n + 1; i += 3){
        cout << i << " ";
    }

    return 0;
}