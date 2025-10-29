#include<iostream>
#include<math.h>
using namespace std;
int main(){
     int n;
     cout<<"Enter binary number"<<endl;
     cin>>n;
     int digit,val =0;
     int i = 0;
    while (n!=0)
    {
        int digit = n%10;
        val = digit*pow(2,i)+val;
        n = n/10;
        i++;
    }
    cout<<val<<endl;
                                                                                                  
    return 0;
}