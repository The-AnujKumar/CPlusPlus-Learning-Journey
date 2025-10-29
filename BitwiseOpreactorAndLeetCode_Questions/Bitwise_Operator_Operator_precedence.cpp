#include <iostream>
using namespace std;
int main()
{
    // int a;
    // cout<<"Enter number = "<<endl;
    // cin>>a;

    // cout<<"a++ =3 "<<a++<<endl;
    // cout<<"a-- =4 "<<a--<<endl;
    // cout<<"++a =4 "<<++a<<endl;
    // cout<<"--a =3 "<<--a<<endl;
    // cout<<"a =3  "   <<a<<endl;
    // print number to a
    // for (int i = 1; i <=a; i++)
    // {
    //     cout<<i<<endl;
    //     sum = sum+i;
    // }
    // cout<<"SUM is = "<<sum<<endl;

    // Print fabonacci series
    //  int firstnumber = 0;
    //  int secondnumber = 1;
    //  cout<<firstnumber<<" "<<secondnumber<<" ";
    //  for (int i = 1; i <= a; i++)
    //  {
    //      int c = firstnumber+secondnumber;
    //      cout<<c<<" " ;
    //      firstnumber = secondnumber;
    //      secondnumber=c;
    //      i = i++;
    //  }

    // prime number
    // int n ;
    // int b = 0;
    // cout<<"Enter number";
    // cin>>n;
    // for(int i = 2;i<n;i++){
    //     if (n%i==0)
    //     {
    //         b = b+1;
    //         cout<<i<<" ";
    //         break;
    //     }
    // }
    // if (b>=1)
    // {
    //     cout<<"Number is not prime";
    // }
    // else
    // {
    //     cout<<"Number is prime";
    // }

    for (int i = 0; i < 5; i++){
        for (int j = i; j <= 5; j++)
        {
            cout << i << " " << j << endl;
        }
    }
    return 0;
}