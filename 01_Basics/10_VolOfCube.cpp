#include <iostream>
using namespace std;

int main()
{

    const float pi = 3.1415f;
    float r;

    cout << "Enter the radius of the sphere: ";
    cin >> r;

    float vol = (4.0f / 3.0f) * pi * r * r * r;
    cout << "Volume : " << vol << endl;

    return 0;
}