#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 3, 0, 10, 2, 5, 6};
    int n = sizeof(arr)/4;

    int sumE = 0;
    int sumO = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0) sumE += arr[i];
        else sumO += arr[i];
    }

    cout << abs(sumE - sumO) << endl;

    return 0;
}