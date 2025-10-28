#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter number" << endl;
    cin >> a;
    int i = 2;
    int b = 0;
    while (i < a)
    {
        if (a % i == 0)
        {
            b = b + 1;
        }

        i++;
    }
    if (a<=1)
    {
        
        cout << "Number is not prime" << endl;
    }
    
    else if (b > 0)
    {
        cout << "Number is not prime" << endl;
        
    }
    else
    {
        cout << "Number is Prime" << endl;
    }

    return 0;
} 