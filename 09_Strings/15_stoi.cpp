#include <iostream>
using namespace std;

int main(){

    string s = "12345";
    int num = stoi(s); // convert the string to integer

    cout << num << endl;
    
    num++;
    
    cout << num << endl;
    
    return 0;
}