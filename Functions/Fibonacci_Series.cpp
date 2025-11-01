#include<iostream>
using namespace std;
void fib(int a){
    int num1=0,num2=1,sum = 0;
    int i = 0;
    cout<<num1<<" "<<num2<<" ";
    while (i<a-2)
    {
        sum = num1+num2;
        cout<<sum<<" ";
        num1=num2;
        num2 = sum;
        i++;    
    }    
}
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    fib(n);
    return 0;
}