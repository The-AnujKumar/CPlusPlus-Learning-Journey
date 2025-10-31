#include<iostream>
using namespace std;
bool isEven (int a){
    if (a%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<isEven(n)<<endl;
    return 0;
}