#include <iostream>
#include <climits>
using namespace std;
void arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void intersection(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] < arr2[j]) // beacuse array is already shorted.
            {
                break;
            }
            else
            {
                if (arr1[i] == arr2[j])
                {
                    // cout<<"Value aur = "<<j<<endl;
                    cout << arr1[i] << " ";

                    arr2[j] = INT_MIN; // because single value not map with two or more values
                    break;
                }
            }
        }
    }
}
//||------------------------Two pointer approch-----------------------------||
void intersection2(int arr1[], int arr2[], int size1, int size2)
{
    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {

        if (arr1[i] < arr2[j]) // beacuse array is already shorted.
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                i++;
                j++;
            }
        }
    }
}
int main()
{
    int a[5] = {1, 2, 2, 4, 5};
    int b[7] = {1, 2, 2, 3, 6, 7, 8};
    cout << "MAin array 1 is  = ";
    arr(a, 5);
    cout << "MAin array 2 is  = ";
    arr(b, 7);
    cout << "Intersection values are  = ";
    intersection2(a, b, 5, 7);


    return 0;
}