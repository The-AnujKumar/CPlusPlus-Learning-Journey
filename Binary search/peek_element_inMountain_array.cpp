#include<iostream>
using namespace std;
int peek(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){

            start = mid+1;
        }
        else{
            end =mid;
        }
        mid =start+(end-start)/2; 
        
    }
    return end;   
}
int main(){
    cout<<"hello"<<endl;
    int a[7] = {1,2,3,4,5,10,6};
    int c = peek(a,7);
    cout<<"Peek value index is = "<<c<<endl;
    return 0;
}