#include <iostream>
using namespace std;

int main(){

    int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int rows = sizeof(arr)/sizeof(arr[0]);
    int cols = sizeof(arr[0])/4;

    int mini = INT_MAX;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            mini = min(mini, arr[i][j]);
        }
    }

    cout << "Minimum --> " << mini << endl;

    return 0;
}