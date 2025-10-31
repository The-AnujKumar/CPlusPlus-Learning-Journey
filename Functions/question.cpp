#include <iostream>
using namespace std;
int fac(int x)
{
    int ans = 1;
    for (int i = 1; i <= x; i++)
    {
        ans = ans * i;
    }
    return ans;
}
int nCr(int n, int r)
{
    int val = ((fac(n)) / ((fac(r)) * (fac(n - r))));
    return val;
}
int main()
{
    int a, b;
    cout << "Enter Number " << endl;
    cin >> a >> b;
    cout << "nCr is = " << nCr(a, b) << endl;
    cout << "nCr is = " << fac(a) << endl;

    return 0;
}