#include<iostream>
using namespace std;
void update(int b[],int size){
    cout<<"Function start"<<endl;
    b[1] = 120;
    for (int i = 0; i <size; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl<<"Function end"<<endl;
    
}
int main(){
    int a[3] = {1,2,3};
    update(a,3);
    cout<<"Main function start"<<endl;

    for (int i = 0; i <3; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}