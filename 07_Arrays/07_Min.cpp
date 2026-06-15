#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 5, -6, 45, 3};
    int n = sizeof(arr)/4;

    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        mini = min(mini, arr[i]);
    }

    cout << "Minimum --> " << mini << endl;
}