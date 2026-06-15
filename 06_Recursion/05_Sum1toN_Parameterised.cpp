#include <iostream>
using namespace std;

void sum(int i, int n, int res)
{
    // Base Case :
    if (i > n)
    {
        cout << res << endl;
        return;
    }

    // Processing
    res += i;

    // Recursive call
    sum(i + 1, n, res);
}
int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    sum(1, n, 0);

    return 0;
}