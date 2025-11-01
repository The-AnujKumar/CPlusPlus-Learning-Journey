#include<iostream>
using namespace std;
void digit(int a[],int size){
    for(int i = 0;i<size;i++){
        cin>>a[i];
    }
    
}
int sum(int arr[],int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum+arr[i];
    }
    return sum;   
}
int main(){
    int size;
    cout<<"Enter size of an array"<<endl;
    cin>>size;

    int a[size];
    cout<<"Enter array's value"<<endl;
    digit(a,size);
    cout<<"Sum is = "<<sum(a,size)<<endl;
    

    return 0;
}