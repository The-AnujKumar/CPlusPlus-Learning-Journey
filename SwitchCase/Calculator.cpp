#include<iostream>
using namespace std;
int main(){
    /**************************CALCULATOR*******************************/
    int a,b;
    char operation;
    cout<<"Enter First number"<<endl;
    cin>>a;
    cout<<"Enter operation between '+','-','*','/' "<<endl;
    cin>>operation;
    cout<<"Enter First number"<<endl;
    cin>>b;
    switch(operation){
        case '+':
        cout<<"Solution is = "<<a+b<<endl;
        break;
        case '-':
        cout<<"Solution is = "<<a-b<<endl;
        break;
        case '*':
        cout<<"Solution is = "<<a*b<<endl;
        break;
        case '/':
        cout<<"Solution is = "<<a/b<<endl;
        break;

        default:
        cout<<"Enter correct operation"<<endl;

    }
    return 0;
}