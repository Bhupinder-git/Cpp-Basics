#include <iostream>
using namespace std;

int main(){

    string str = "Bhupinder";

    cout << str << " " << str.length() << endl;

    str.push_back('r'); // adds single character at the end

    cout << str << " " << str.length() << endl;

    str.pop_back(); // remove the last character from the string

    cout << str << " " << str.length() << endl;

    str.append(" Singh"); // append another string at the end

    cout << str << " " << str.length() << endl;

    str.clear(); // clears the entire string

    cout << str << " " << str.length() << endl;

    return 0;
}