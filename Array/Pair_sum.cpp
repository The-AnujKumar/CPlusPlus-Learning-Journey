#include <iostream>
using namespace std;
void arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void pairsum(int arr[], int size, int val)
{
    int i = 0, j = size - 1;

    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == val)
        {
            cout << arr[i] << " " << arr[j] << "  ";
            i++;
            j--;
        }
        else if (sum > val)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int val;
    cout << "Enter sum value " << endl;
    cin >> val;
    cout << "Main array is = ";
    arr(a, 10);
    cout << "PAir are = ";
    pairsum(a, 10, val);
    return 0;
}