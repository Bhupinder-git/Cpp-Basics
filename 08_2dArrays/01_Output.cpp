#include <iostream>
using namespace std;

int main(){

    // Declaration
    int arr[2][3];

    // Initialization
    arr[0][0] = 6;
    arr[0][1] = 1;
    arr[0][2] = 2;
    arr[1][0] = 4;
    arr[1][1] = 3;
    arr[1][2] = 5;

    // Printing
    cout << "Row-wise printing : " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }cout << endl;

    cout << "Col-wise printing : " << endl;
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 2; i++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }cout << endl;

    int m = sizeof(arr)/sizeof(arr[0]); // no of rows
    int n = sizeof(arr[0])/4; // no of cols
    cout << "No of rows(m) : " << m << endl;
    cout << "No of cols(n) : " << n << endl;

    return 0;
}