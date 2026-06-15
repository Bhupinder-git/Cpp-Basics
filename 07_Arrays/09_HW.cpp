#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/4;

    cout << "Original Array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    cout << "Modified Array : ";
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) arr[i] += 10;
        else arr[i] *= 2;
        cout << arr[i] << " ";
    }

    return 0;
}