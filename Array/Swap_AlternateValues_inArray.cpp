#include<iostream>
using namespace std;
void arr(int array[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
}
void swaparray(int arr[],int size){
    int start =0;
    int end = 1;
    for (int i = 0; i <(size/2); i++){
        swap(arr[start],arr[end]);
        start= start +2;
        end= end +2;
        // cout<<arr<<" ";
    }
} 
void swaparr(int arr[],int size){
    for (int i = 0; i < size; i =i+2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }    
} 
//awap eirthout using swap function
void withoutswaparr(int arr[],int size){
    int digit = 0;
    for (int i = 0; i < size; i =i+2)
    {
        if (i+1<size)
        {
            digit = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=digit;
        }
    }    
} 

//swap without using swap function

   

int main(){
    int a[9] = {1,2,3,4,5,6,7,8,9};
    int b[10] = {1,2,3,4,5,6,7,8,9,10};
     
    cout<<"MAin Array is = ";
    arr(a,9);
    cout<<"Swap Array is = ";
    withoutswaparr(a,9);
    arr(a,9);

    return 0;
}