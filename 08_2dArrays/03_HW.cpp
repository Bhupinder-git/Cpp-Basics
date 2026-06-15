#include <iostream>
using namespace std;

int main(){

    int arr[4][2] = {0};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr[0])/4;

    // Taking input : 
    for(int i = 0; i < m; i++){
        cout << "Enter Details of Student " << i+1 << " : "; 
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    // Printing
    for(int i = 0; i < m; i++){
        cout << "Student " << i+1 << " (roll, marks) : ";
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }


    return 0;
}