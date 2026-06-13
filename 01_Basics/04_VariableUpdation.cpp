#include <iostream>
using namespace std;

int main(){

    int x = 5;
    cout<<x<<endl;

    cout<<"Hi updating x..."<<endl;

    x = 106; //updating 
    cout<<x<<endl;

    cout<<"Updating Again..."<<endl;
    
    x = x + 94; // x = 200
    cout<<x<<endl;
    
    cout<<"Updating Again..."<<endl;
    
    // x = x - 204; // x = -4
    // can also be written as
    x -= 204;
    cout<<x<<endl;

    return 0;
}