#include<iostream>
using namespace std;
void printArray(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Done"<<endl;
    
}
int main(){
    // int n;
    // cout<<"Enter number"<<endl;
    // cin>>n;
    // int b[10]={};
    // for (int i = 0; i <n; i++)
    // {
    //     // b[i] = 1;
    //     cout<<b[i]<<" ";
        
    // }
    // // cout<<b<<endl;
    // int a[5] ={1,2,3,4,5};
    // printArray(a,5);
    // int b[6] ={6,7,4,8,10};
    // printArray(b,5);
    // int c[7] ={7,4,8,10};
    // printArray(c,5);
    // int d[8] ={1,7,4,8,10};
    // printArray(d,10);
    // int e[9] ={9,5,3,1,2,3,4,5};
    // printArray(e,3);
    
    int e[9] ={9,5,3,1,2,3,4,5};
    int g = sizeof(e)/sizeof(int);
    cout<<"Size is = "<<g<<endl;
    return 0;
}