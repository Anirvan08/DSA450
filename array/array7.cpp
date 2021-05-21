#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n)
{
    int currentSize = 0, shortestSize = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSize += arr[i];
        if (currentSize > shortestSize)
            shortestSize = currentSize;

        if (currentSize < 0)
            currentSize = 0;
    }

    return shortestSize;
}

int main()
{
    int arr[8] = {2, 4, -5, 6, 1, -8, 6, 2};
    int subArr = maxSubarraySum(arr, 8);
    cout << "Maximun sub array is " << subArr;
    return 0;
}