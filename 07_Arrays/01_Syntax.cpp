#include <iostream>
using namespace std;

int main(){

    // Declaration 
    int arr[5];

    // Initializing single element 
    // arr[0] = 6;
    // arr[1] = 4;
    // arr[2] = 9;
    // arr[3] = 0;
    // arr[4] = 1;

    cout << "Input :- ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    // printing 
    // cout << arr[0] << " ";
    // cout << arr[1] << " ";
    // cout << arr[2] << " ";
    // cout << arr[3] << " ";
    // cout << arr[4] << " ";

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    } cout << endl;

    // updating
    arr[0] = 106;

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}