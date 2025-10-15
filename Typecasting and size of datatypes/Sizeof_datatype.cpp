#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    float b = 1.23;
    double c = 1.23;
    char d = 'c';

    cout << "size of a is " << sizeof(a) << endl;
    cout << "size of b is " << sizeof(b) << endl;
    cout << "size of b is " << sizeof(c) << endl;
    cout << "size of b is " << sizeof(d) << endl;
    return 0;
}