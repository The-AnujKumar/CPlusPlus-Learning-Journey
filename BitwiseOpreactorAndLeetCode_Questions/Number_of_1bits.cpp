#include<iostream>
using namespace std;

int main(){
    // Question 1

    // int n;
    // cout<<"Enter a number";
    // cin>>n;
    // int c = 0,product = 1,sum = 0,d;
    // while(n!=0)
    // {
    //     c = n%10;
    //     product = product*c;
    //     sum = sum+c;
    //     n = n/10;
    
    // }
    // cout<<"Prodeuct = "<<product <<endl<<"Sum = "<<sum<<endl;
    // cout<<"Result is "<<product-sum; 

    //Question 2
    //check number of 1 bit  in a integer
    int n;
    cout<<"Enter a number";
    cin>>n;
    int d = 0;
    while (n!=0)
    {
        
        if(n&1){
            d = d+1;
        }
        n= n>>1;   
    }
    cout<<d<<endl;
    

    return 0;
}