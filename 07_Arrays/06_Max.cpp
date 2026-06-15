#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 5, 6, 45, 3};
    int n = sizeof(arr)/4;

    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        maxi = max(maxi, arr[i]);
    }

    cout << "Maximum --> " << maxi << endl;
}