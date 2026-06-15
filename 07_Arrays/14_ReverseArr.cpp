#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/4;

    cout << "Original : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    int i = 0;
    int j = n - 1;
    while(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    cout << "Reversed : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}