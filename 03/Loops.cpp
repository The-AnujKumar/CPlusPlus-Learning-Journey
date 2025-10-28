#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number"<<endl;
    cin>>a;
    int i = 1;
    int sum = 0;
    while(i<=a){
        cout<<i<<endl;
        sum = sum +i;
        
        i++;
    }
    cout<<"Sum is "<<sum<<endl;

    return 0;
}