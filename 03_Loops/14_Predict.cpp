#include <iostream>
using namespace std;

int main(){

    // Infinite Loop
    // int i;
    // while(i = 10){
    //     cout << i << endl;
    //     i = i + 1;
    // }

    // Infinite Loop
    // int i = 10;
    // while(i = 20)
    //     cout << "A compute buff!" << endl;

    int x = 4, y = 0;
    while(x >= 0){
        x--;
        y++;
        if(x == y)
            continue;
        else 
            cout << x << " " << y << endl;
    }

    return 0;
}