#include <iostream>
using namespace std;

int main(){

    int arr[][3] = {1, 2, 3, 4, 5, 6};
    int rows = sizeof(arr)/sizeof(arr[0]);
    int cols = sizeof(arr[0])/4;

    int prod = 1;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            prod *= arr[i][j];
        }
    }

    cout << "Product --> " << prod << endl;

    return 0;
}