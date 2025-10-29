#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int count = 0;
    for (int i = 0; i <=30; i++)
    {
        int ans = pow(2,i);
        if (ans==n)
        {
            count = count+1;
            break;
        }

    }
    if(count>=1){
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    
    

    
    return 0;
}