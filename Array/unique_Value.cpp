#include <iostream>
using namespace std;
void arr(int array[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
}

int uniqueValue(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
    
    
}
int main()
{
    int n[5] = {1, 3, 2, 1, 3};
    cout<<"Main array is = ";
    arr(n,5);
    int value = uniqueValue(n,5);
    cout<<value <<endl;
  

    return 0;
}