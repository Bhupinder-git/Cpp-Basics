#include <iostream>
using namespace std;

int main(){

    int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int rows = sizeof(arr)/sizeof(arr[0]);
    int cols = sizeof(arr[0])/4;

    int maxi = INT_MIN;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            maxi = max(maxi, arr[i][j]);
        }
    }

    cout << "Maximum --> " << maxi << endl;

    return 0;
}