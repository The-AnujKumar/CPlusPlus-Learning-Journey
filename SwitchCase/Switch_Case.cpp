#include<iostream>
using namespace std;
int main(){
    int n = 2;
    cout<<"Enter number"<<endl;
    cin>>n;

    switch(n)
    {
        case 1:
        cout<<"First"<<endl;
        break;
        case 2:
        cout<<"Second"<<endl;
        // continue; 
        case 3:
        cout<<"Second"<<endl;
        break;
        default:
        cout<<"Default"<<endl;
    }
    while (1)
        {
            switch (true)
            {
            case 1:
                cout<<"hello"<<endl;
                exit(0);
            }
        }

    
    return 0;
}