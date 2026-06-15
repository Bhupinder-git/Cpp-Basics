#include <iostream>
using namespace std;

int main(){

    int arr[5][5] = {0};
    
    // Initialization
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            arr[i][j] = 106;
        }
    }

    // Printing
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    return 0;
}