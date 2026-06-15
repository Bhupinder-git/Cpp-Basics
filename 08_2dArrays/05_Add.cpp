#include <iostream>
using namespace std;

int main(){

    int m, n;
    cout << "Enter the no of rows for matrix1 : ";
    cin >> m;
    cout << "Enter the no of cols for matrix1 : ";
    cin >> n;

    int p, q;
    cout << "Enter the no of rows for matrix2 : ";
    cin >> p;
    cout << "Enter the no of cols for matrix2 : ";
    cin >> q;

    if(m != p || n != q){
        cout << "Addition not possible!" << endl;
        exit(1);
    }
    
    int arr[m][n] = {0};
    int brr[p][q] = {0};

    // Taking input : 
    cout << "Input(Matrix1) :- "; // 9 4 2 0 1 7
    for(int i = 0; i < m; i++){ 
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Input(Matrix2) :- "; // 2 1 6 5 9 4
    for(int i = 0; i < p; i++){
        for(int j = 0; j < q; j++){
            cin >> brr[i][j];
        }
    }

    // Printing
    cout << "Matrix 1 : " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    cout << endl;

    cout << "Matrix 2 : " << endl;
    for(int i = 0; i < p; i++){
        for(int j = 0; j < q; j++){
            cout << brr[i][j] << " ";
        }cout << endl;
    }

    cout << endl;

    // Addition
    int crr[m][n] = {0};
    cout << "Addition : " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            crr[i][j] = arr[i][j] + brr[i][j];
            cout << crr[i][j] << " ";
        }cout << endl;
    }

    return 0;
}