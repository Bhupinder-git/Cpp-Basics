#include <iostream>
using namespace std;

int main(){

    int n;
    
    cout << "Enter any integer : ";
    cin >> n; 

    int factor = -1;

    // Method 1 : Executes n/2 times
    // for(int i = 1; i <= n/2; i++){
    //     if(n % i == 0) factor = i;
    // }
    // cout << factor << endl;

    // Method 2 : 
    for(int i = n/2; i >= 1; i--){
        if(n % i == 0){
            cout << i << " ";
            break;
        }
    }


    return 0;
}