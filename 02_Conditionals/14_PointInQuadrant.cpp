#include <iostream>
using namespace std;

int main(){

    int x,y;
    cout << "Enter x-axis coordinate : ";
    cin >> x;

    cout << "Enter y-axis coordinate : ";
    cin >> y;

    if(x == 0 && y == 0)
        cout << "Origin" << endl;
    else if(x == 0)
        cout << "Y-Axis" << endl;
    else if(y == 0)
        cout << "X-Axis" << endl;
    else if(x > 0 && y > 0)
        cout << "1st Quadrant" << endl;
    else if(x > 0 && y < 0)
        cout << "4th Quadrant" << endl;
    else if(x < 0 && y < 0)
        cout << "3rd Quadrant" << endl;
    else if(x < 0 && y > 0)
        cout << "2nd Quadrant" << endl;
    else 
        cout << "Enter Valid Coordinates!" << endl;

    return 0;
}