#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int digit, rev = 0;
    //using while loop
    // while (n!=0)//till n = 0
    // {
    //     digit = n%10;//extract last digit
    //     rev = rev*10+digit;//add digit in reverse number
    //     n=n/10;//remove last digit
    // }
    for (n; n!=0; n=n/10)
    {
        digit = n%10;
        rev = rev*10+digit;
    }
    
    cout<<"Reverse number is "<<rev<<endl;
    

    return 0;
}