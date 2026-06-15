#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter any integer : ";
    cin >> n;

    int arr[n] = {0};

    for(int i = 0; i < n; i++){
        arr[i] = (i+1) * (i+1);
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}