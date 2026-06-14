#include <iostream>
using namespace std;

int main(){

    int m, n;

    cout << "Enter no of rows : ";
    cin >> m;

    cout << "Enter no of cols : ";
    cin >> n;

    // m --> no of rows  n --> no of cols
    for(int i = 0; i < m; i++){ // i --> row_no
        for(int j = 0; j < n; j++){ // j --> col_no
            cout << "* ";
        }cout << endl;
    }

    return 0;
}