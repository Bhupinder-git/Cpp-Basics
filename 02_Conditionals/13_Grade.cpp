#include <iostream>
using namespace std;

int main(){

    int marks;
    cout << "Enter marks : ";
    cin >> marks;

    if(marks > 100)
        cout << "Enter valid marks!";
    else if(marks >= 81)
        cout << "Very Good" << endl;
    else if(marks >= 61)
        cout << "Good" << endl;
    else if(marks >= 41)
        cout << "Average" << endl;
    else if(marks >= 33)
        cout << "Pass" << endl;
    else if(marks >= 0)
        cout << "Fail" << endl;
    else 
        cout << "Enter valild marks!";


    return 0;
}