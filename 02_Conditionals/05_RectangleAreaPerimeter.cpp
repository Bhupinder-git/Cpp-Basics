#include <iostream>
using namespace std;

int main(){

    int length, breadth;

    cout << "Enter the length of the rectangle : ";
    cin >> length;

    cout << "Enter the breadth of the rectangle : ";
    cin >> breadth;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    cout << "Area --> " << area << "  Perimeter --> " << perimeter << endl; 
    if(area > perimeter) cout << "Area is greater than perimeter" << endl;
    else cout <<"Perimeter is greater" << endl;

    return 0;
}