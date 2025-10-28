#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number" << endl;
    cin >> a;
    int i = 0;
    int sumeven = 0;
    int sumodd = 0;
    while (i <= a)
    {
        if (i % 2 == 0)
        {

            sumeven = sumeven + i;
        }
        else
        {

            sumodd = sumodd + i;
        }

        i++;
    }
    cout << "\nSum of even number is " << sumeven << endl;
    cout << "\nSum of odd number is " << sumodd << endl;
    return 0;
}