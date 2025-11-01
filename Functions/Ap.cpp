#include<iostream>
using namespace std;
int ap(int n){
    int a = ((3*n)+7);
    return a;
}
int main(){
    int a ;
    cout<<"Enter a number"<<endl;
    cin>>a;
    int c = ap(a);
    cout<<"Anuswer is = "<<c<<endl;
    return 0;
}