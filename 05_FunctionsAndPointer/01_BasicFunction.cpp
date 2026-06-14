#include <iostream>
using namespace std;

// Function Declaration
void usa(){
    cout << "You are in USA" << endl;
    return;
    cout << "You are in USA" << endl; 
}

void india(){
    cout <<  "You are in INDIA" << endl;
    return;
}

int main(){

    cout << "You are in main" << endl;
    india();
    usa();

    return 0;
}