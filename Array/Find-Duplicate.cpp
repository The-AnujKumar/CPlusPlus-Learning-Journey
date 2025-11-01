#include <iostream>
using namespace std;
void arr(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void dupval(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size && j != i; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i]<<" ";
            }
            
        }
    }
}
// int dupval2(int arr[], int size)
// {
//     int a[size]={};
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size && j != i; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 // cout << arr[i]<<" ";
//                 return arr[i];
//             }
            
//         }
//     }
//     return -1;
    
// }
	
int main()
{
    int n[7] = {1, 2, 3, 4,4,5,5};
    cout << "Main array is = ";
    arr(n, 7);
    cout << "Duplicate value is = ";
    dupval(n, 7);
    // int duplicate = dupval2(n,7);
    // if (duplicate)
    // {
    //     cout<< "Duplicate value is = "<<duplicate;
    // }
    // else
    // {
    //     cout<<"Duplicate value is not found "<<endl;
    // }
    
    
    // cout<<dupval2(n, 7);

    return 0;
}