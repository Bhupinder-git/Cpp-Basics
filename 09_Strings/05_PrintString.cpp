#include <iostream>
using namespace std;

int main(){

    string s = "Raghav Garg is a teacher";

    // Method 1 : Using loop
    // int n = s.length();
    // for(int i = 0; i < n; i++){
    //     cout << s[i];
    // }

    // Method 2 : 
    // cout << s << endl;

    // Method 3 :
    int i = 0;
    while(s[i]){
        cout << s[i];
        i++;
    }

    return 0;
}