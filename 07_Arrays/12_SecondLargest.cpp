#include <iostream>
using namespace std;

int main(){

    int arr[] = {10, 12, 0, 9, 4, 12, 1, 2};
    int n = sizeof(arr)/4;

    int maxi = INT_MIN;
    int maxiS = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxi){
            maxiS = maxi;
            maxi = arr[i];
        }
        cout << arr[i] << " ";
    } cout << endl;

    cout << "Second Largest --> " << maxiS << endl;
    
    return 0;
}