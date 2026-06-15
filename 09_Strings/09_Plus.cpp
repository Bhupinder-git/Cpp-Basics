#include <iostream>
using namespace std;

int main(){

    string str = "Raghav";

    cout << str << " " << str.length() << endl;
 
    str = str + " garg";

    cout << str << " " << str.length() << endl;

    str = "Mr. " + str;

    cout << str << " " << str.length() << endl;

    return 0;
}