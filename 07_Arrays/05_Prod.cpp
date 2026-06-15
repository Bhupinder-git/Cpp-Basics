#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / 4;
    int prod = 1;

    cout << "arr --> ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
        prod = prod * arr[i];
    }cout << endl;

    cout << "Prod --> " << prod << endl;

    return 0;
}