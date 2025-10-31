#include <iostream>
using namespace std;
int main()
{
    /*****************************Calculate 100,50,20,1,notes**********************/
    int n;
    cout << "Enter rupees " << endl;
    cin >> n;
    int a = n / 100;    //100 rupees note
    int b = n - (a * 100);
    int c = b / 50;     //50 rupees note
    int d = b - (c * 50);
    int e = d/20;       //20 rupees note
    int f = d-(e*20);   //1 rupees note
    switch (1)
    {
    case 1:
        cout << " Total 100 rupees note is " << a << endl;
    case 2:
        if (b < 50)
        {
            cout << " Total 50 rupees note is  0" << endl;
        }
        else
            cout << " Total 50 rupees note is " << c << endl;
    case 3:
        if (b < 20)
        {
            cout << " Total 20 rupees note is  0" << endl;
        }
        else
            cout << " Total 20 rupees note is " << e << endl;
    case 4:
        cout << " Total 1 rupees note is " << f << endl;
    }
    // cout<<"Value is = "<<((a*100)+(c*50)+(e*20)+(f))<<endl;
    // cout<<"value is "<<b<<"  val 2 is = "<<d<<"  val 3 is = "<<f<<endl;

    return 0;
}