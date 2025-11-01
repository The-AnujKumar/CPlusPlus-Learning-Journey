#include<iostream>
using namespace std;
void arr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
//Two pointer approach
void shortarray(int arr[],int size){
    int i = 0,j = size-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while (arr[j]==1 && i<j)
        {
            j--;
        }
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
        // if (arr[i]==0)
        // {
        //     i++;
        // }
        // else if(arr[j] == 1){
        //     j--;
        // }
        // else if(arr[i]==1 &&arr[j]==0){
        //     swap(arr[i],arr[j]);
        //     i++;
        //     j--;
        // }
        // else{
        //     i++;
        //     j--;
        // }
        
    }
}
int main(){
    int a[8] = {0,1,0,0,0,0,1,1};\
    cout<<"MAin array is = ";
    arr(a,8);
    cout<<"Shorted array is = ";
    shortarray(a,8);
    arr(a,8);

    return 0;
}