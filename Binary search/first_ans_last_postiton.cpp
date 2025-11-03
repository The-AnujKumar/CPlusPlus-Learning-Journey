#include<iostream>
using namespace std;
int position(int arr[],int size, int key){
    int count = -1;
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            // return mid;
            count = mid;
            end = mid-1;
        }
        else if (key<arr[mid])
        {
            end = mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid =start +(end-start)/2;    
    }
    return count;
    
    return -1;
}
int last_position(int arr[],int size, int key){
    // int count = key+1;
    int ans = -1;
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if (key<arr[mid])
        {
            end = mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid =start +(end-start)/2;    
    }
    
    return ans;
}
int main(){
    int a[8] = {1,3,4,4,4,4,4,5};
    int key ;
    cout<<"Enter key"<<endl;
    cin>>key;
    int b = position(a,8,key);
    int c = last_position(a,8,key);

    cout<<"value is  = "<<b<<" "<<c<<endl;


    return 0;

}