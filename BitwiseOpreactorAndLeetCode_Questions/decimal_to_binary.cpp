#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    string val = "";
    if (n>=0)
    {
        while(n!=0){
            int digit = n&1;
            val = char(digit+'0')+val;
            n = n>>1;
        }
    }
    else
    {
        for (int i = 31; i >=0; i--)
    {
        int bit = (n>>i)&1;
        cout<<bit;    
    }
    }
    
    
    
    cout<<val<<endl;
    
    
    
    return 0;
}