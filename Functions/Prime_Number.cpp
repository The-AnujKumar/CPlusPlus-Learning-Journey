#include <iostream>
using namespace std;
void isPrime(int a)
{
    int num = 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            num = num + 1;
            break;
        }
    }
    if (num >= 1)
    {
        cout << "Number is not Prime" << endl;
    }
    else
    {
        cout << "Number is prime" << endl;
    }
}
int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    isPrime(n);
    return 0;
}