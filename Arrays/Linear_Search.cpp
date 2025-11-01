#include<iostream>
using namespace std;
bool search(int arr[],int size,int val){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==val)
        {
            return 1;
        }
        
    }
    return 0;
    
}
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int value;
    cout<<"Enter value"<<endl;
    cin>>value;
    bool result = search(a,10,value);
    if (result)
    {
        cout<<"Value is present "<<endl;
    }
    else{
        cout<<"Value is not present"<<endl;
    }
    

    return 0;
}