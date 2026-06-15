#include <iostream>
using namespace std;

int main(){

    int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int rows = sizeof(arr)/sizeof(arr[0]);
    int cols = sizeof(arr[0])/4;

    int sum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            sum += arr[i][j];
        }
    }

    cout << "Sum --> " << sum << endl;

    return 0;
}