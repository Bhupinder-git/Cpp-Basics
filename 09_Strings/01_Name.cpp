#include <iostream>
using namespace std;

int main(){

    // Character Array 
    char name[9] = {'B', 'h', 'u', 'p', 'i', 'n', 'd', 'e', 'r'};

    for(int i = 0; i < 9; i++)
        cout << name[i];

    cout << endl;

    string str = "My name is bhupinder";
    cout << str << endl;

    cout << "Enter a string : ";
    // cin >> str;
    getline(cin, str);

    cout << str << endl;

    return 0;
}