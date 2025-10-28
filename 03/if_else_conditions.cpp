#include <iostream>
using namespace std;
int main()
{
    //                         Positive or Negative number
    // int a;
    // cout<<"Enter a number "<<endl;
    // cin>>a;
    // if(a>0){
    //     cout<<"Enter number is Positive "<<endl;
    // }
    // else if(a<0){
    //     cout<<"Number is Negative "<<endl;
    // }
    // else{
    //     cout<<"Number is zero"<<endl;
    // }
    //                         Greater number
    // int b,c;
    // cout<<"Enter two number"<<endl;
    // cin>>b>>c;
    // if(b>c){
    //     cout<<"Greater number is "<<b<<endl;
    // }
    // else{
    //     cout<<"Greater number is "<<c<<endl;
    // }
    // To get ASCII value of any character
    // int d;
    // d = cin.get();  // convert value in ASCII
    // cout<<"The value is "<<d<<endl;
    //                          Check Number is numeric or alphabet
    int x;
    cout << "Enter single value" << endl;
    x= cin.get();

    if (x >= 65 && x <= 90)
    {
        cout << "value is in Uppercase" << endl;
    }
    else if (x >= 97 && x <= 122)
    {
        cout << "Value is in lowercase" << endl;
    }
    else 
    {
        cout << "Value is numeric" << endl;
    }
    

    return 0;
}