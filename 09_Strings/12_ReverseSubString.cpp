#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string str;

    cout << "Enter string : ";
    getline(cin, str);

    cout << "Original String : " << str << endl;
    
    // Reversing the substring from pos 2 to 5
    reverse(str.begin() + 1, str.begin() + 5);
    
    cout << "Modified String : " << str << endl;

    return 0;
}