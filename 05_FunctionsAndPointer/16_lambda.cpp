#include <iostream>
using namespace std;

int main(){

    // Lambda fn

    // 1.Immediately Invoked (Cannot be stored)
    [](int cups){
        cout << "Brewing " << cups << " cups of Oolong tea..." << endl;
    }(5);

    // 2.Can be assigned
    auto chaiFn = [](int cups){
        cout << "Sered " << cups << " cups of Oolong tea." << endl;
    };

    chaiFn(3);

    auto squared = [](int n){
        return n*n;
    };

    cout << squared(2) << endl;

    return 0;
}