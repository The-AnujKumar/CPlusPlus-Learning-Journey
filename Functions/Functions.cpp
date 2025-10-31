#include<iostream>
using namespace std;
int power(){
    int a,b;
    cin>>a>>b;
    int c = 1;
    for (int i = 1; i <= b; i++)
    {
        c = c*a;
    }
    return c;
    
}
int main(){
    // int a,b;
    // cout<<"Enter"<<endl;
    // cin>>a>>b;
    // // int d = power(a,b);
    // cout<<"Answer is = "<<power(a,b)<<endl;
    cout<<"Enter"<<endl;
    int d = power();
    cout<<"ANswer is = "<<d<<endl;
    int h = power();
    cout<<"ANswer is = "<<h<<endl;
    int f = power();
    cout<<"ANswer is = "<<f<<endl;
    int g = power();
    cout<<"ANswer is = "<<g<<endl;
    return 0;
}