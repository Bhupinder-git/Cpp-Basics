#include <iostream>
using namespace std;

int main(){

    int m, n;
    
    cout << "Enter the no of rows : ";
    cin >> m;

    cout << "Enter the no of cols : ";
    cin >> n;

    int arr[m][n] = {0};

    cout << "Input :- ";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Original Matrix : " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    cout << endl;

    int brr[n][m] = {0};

    cout << "Printing Transpose : " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            brr[i][j] = arr[j][i];
            cout << brr[i][j] << " ";
        }cout << endl;
    }

    return 0;
}