#include<iostream>
#include<climits>
using namespace std;
int getmax(int a[],int size){
    int max =INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
    
}
int getmin(int a[],int size){
    int min =INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(a[i]<min){
            min = a[i];
        }
    }
    return min;
    
}
int main(){
    int size;
    cout<<"Enter size "<<endl;
    cin>>size;
    int n[100];
    for (int i = 0; i < size; i++)
    {
        cin>> n[i];
    }
    cout<<"Max value is = "<<getmax(n,size)<<endl;
    cout<<"Min value is = "<<getmin(n,size)<<endl;

    

    return 0;
}