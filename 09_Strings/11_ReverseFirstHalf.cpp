#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string str;

    cout << "Enter string with even no of characters : ";
    getline(cin, str);

    cout << "Original String : " << str << endl;

    int n = str.length();

    // Method 1 : 
    // int i = 0;
    // int j = n/2 - 1;
    // while(i < j){
    //     swap(str[i], str[j]);
    //     i++;
    //     j--;
    // }

    // Method 2 : 
    reverse(str.begin(), str.begin() + (n/2));
    
    cout << "Modified String : " << str << endl;

    return 0;
}