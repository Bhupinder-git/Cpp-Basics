#include <iostream>
using namespace std;

int maxF(int x, int y){
    if(x > y) return x;
    else return y;
}

int main(){

    int x = 5;
    int y = 12;

    cout << "Maximum : " << maxF(5,12) << endl;

    return 0;
}