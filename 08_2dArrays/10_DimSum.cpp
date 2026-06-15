#include <iostream>
using namespace std;

int main(){

    int arr[5][5] = {{1, 1, 1, 1, 1},
                     {2, 2, 2, 2, 2},
                     {3, 3, 3, 3, 3},
                     {4, 4, 4, 4, 4},
                     {5, 5, 5, 5, 5}
                    };
    
    int l1, r1, l2, r2;
    cout << "Enter the starting coordinate(l1, r1) : "; // 1 2
    cin >> l1 >> r1;

    cout << "Enter the ending coordinate(l2, r2) : "; // 3 4
    cin >> l2 >> r2;

    int sum = 0;
    for(int i = l1; i <= l2; i++){
        for(int j = r1; j <= r2; j++){
            sum += arr[i][j];
        }
    }

    cout << "Sum : " << sum << endl; // 27
    return 0;
}