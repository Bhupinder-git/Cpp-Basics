#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5];
    int n = sizeof(arr)/4;

    for(int i = 0; i < n; i++){
        brr[i] = arr[n-1-i];
    }

    cout << "arr : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    cout << "brr : ";
    for(int i = 0; i < n; i++){
        cout << brr[i] << " ";
    }cout << endl;
}