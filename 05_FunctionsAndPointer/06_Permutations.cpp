#include <iostream>
using namespace std;

int fact(int n){
    int res = 1;
    for(int i = 1; i <= n; i++){
        res = res * i;
    }
    return res;
}

int permutation(int n, int r){
    int factN = fact(n);
    int factNR = fact(n - r);
    return factN / factNR;
}

int main(){

    int n, r;

    cout << "Enter no of items(n) : ";
    cin >> n;

    cout << "Enter the no of items to be selected(r) : ";
    cin >> r;

    int res = permutation(n, r);
    cout << "No of ways possible to arrange " << r << " items in " << n <<" items : " << res << endl;
    

    return 0;
}