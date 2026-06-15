#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 3, 2, 1};
    int n = sizeof(arr)/4;

    cout << "Array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    int i = 0;
    int j = n - 1;
    bool isPalindrome = true;
    while(i < j){
        if(arr[i] != arr[j]){
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if(isPalindrome) cout << "Valid Palindrome" << endl;
    else cout << "Not a palindrome!" << endl; 

    return 0;
}