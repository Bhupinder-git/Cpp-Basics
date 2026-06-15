#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string str = "Raghav Garg";
    int n = str.length();

    cout << "Original String : " << str << endl;

    // Method 1 : 
    // int i = 0;
    // int j = n - 1;
    // while(i < j){
    //     swap(str[i], str[j]);
    //     i++;
    //     j--;
    // }

    // Method 2 :
    reverse(str.begin(), str.end());

    cout << "Reversed String : " << str << endl;

    return 0;
}