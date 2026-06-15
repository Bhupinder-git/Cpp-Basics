#include <iostream>
using namespace std;

void change(int arr[]){
    arr[0] = 106;
    return;
}

int main(){

    int arr[3] = {1, 2, 3};

    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }cout << endl;

    change(arr);

    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }cout << endl;

    // Arrays are passed by reference by default
    cout << "arr --> " << arr << endl;
    cout << "&arr --> " << &arr << endl;
    cout << "&arr[0] --> " << &arr[0] << endl;
    cout << "*arr --> " << *arr << endl;
    cout << "*(&arr) --> " << *(&arr) << endl;

    return 0;
}