#include <iostream>
using namespace std;

// Function Declaration
void mexico(){
    cout << "You are in Mexico" << endl;
    return;
}
void usa(){
    cout << "You are in USA" << endl;
    mexico();
    return; 
}

void india(){
    cout <<  "You are in INDIA" << endl;
    usa();
    return;
}

int main(){

    cout << "You are in main" << endl;
    india();

    // return 0;
}