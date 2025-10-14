#include <iostream>
using namespace std;
int main(){
        int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int maxVal = a[0];//for maximum value
    int minVal = a[0];//for minumum value
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxVal)
        {
            maxVal = a[i];
        }
        if (a[i] < minVal)
        {

            minVal = a[i];
        }
    }
    cout << "Maximum: " << maxVal << endl;
    cout << "Minimum: " << minVal << endl;
    return 0;
}
