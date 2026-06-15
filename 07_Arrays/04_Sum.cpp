#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / 4;
    int sum = 0;

    cout << "arr --> ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
        sum = sum + arr[i];
    }cout << endl;

    cout << "Sum --> " << sum << endl;

    return 0;
}