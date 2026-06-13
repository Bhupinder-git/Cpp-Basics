#include <iostream>
using namespace std;

int main(){

    float r;
    cout << "Enter the radius of the circle : ";
    cin >> r;

    float a = 3.1415 * r * r;
    
    cout << "Area of circle --> " << a << endl;

    return 0;
}