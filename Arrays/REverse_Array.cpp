#include<iostream>
using namespace std;
void arr(int array[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
}
void revarray(int arr[],int size,int rev[] ){
    // int revarray[] ={};
    for (int i = size-1, j = 0; i >=0 && j < size; i--, j++)
    {
        rev[j]= arr[i];   
    }
    
    for (int k = 0; k < size; k++)
    {
        cout<<rev[k]<<" ";
    }
    
    
}
int main(){
    int a[9] = {1,2,3,4,5,6,7,8,9};
    int reva[9];
    cout<<"Main array is = ";
    arr(a,9);
    cout<<"Reverse array is = ";
    revarray(a,9,reva);
    return 0;
}