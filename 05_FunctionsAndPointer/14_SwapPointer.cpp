#include <iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;

    cout << "Inside Fn : " << *x << " " << *y << endl;
    return;
}

int main(){

    int x, y;

    cout << "Enter x : ";
    cin >> x;

    cout << "Enter y : ";
    cin >> y;

    cout << "Before Call : " << x << " " << y << endl;

    swap(&x, &y);

    cout << "After Call : " << x << " " << y << endl;

    return 0;
}