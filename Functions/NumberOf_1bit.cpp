#include<iostream>
using namespace std;
int bit(int n){
    int count =0;
    while (n!=0)
    {
        if(n&1){
            count = count+1;
        }
        n = n>>1;
    }
    return count;
    
}
int main(){
    int a,b;
    cout<<"Enter both number"<<endl;
    cin>>a>>b;
    int c = bit(a)+bit(b);
    cout<<"Total number of bit is = "<<c<<endl;

    return 0;
}