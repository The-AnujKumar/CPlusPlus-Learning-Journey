#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    // int mid = (start + end) / 2;
    int mid = start +(end-start)/2; // for long integer mear out of range of int then 
    while (start <= end)
    {
        // cout<<mid;
        if (arr[mid] == key)
        {
            return mid;
        }
        if ( key>arr[mid] )
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        // mid = (start+end)/2;
        mid =start +(end-start)/2;
    }
    return -1;
}
int main()
{
    int even[6] = {1, 2,3,5,6,9};
    int odd[5] = {1,2, 3, 4, 5};
    cout << "enter value " << endl;
    int n;
    cin >> n;
    // int index = binarysearch(even, 6, 5);
    // cout << "For even Answer is = " ;
    // cout<<index;
    cout << "For even Answer is = " << binarysearch(even, 5, n) << endl;
    cout << "For odd Answer is = " << binarysearch(odd, 5, n) << endl;
    return 0;
}