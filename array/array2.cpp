#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of Array" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << endl;
        cin >> arr[i];
    }
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Maximum Element in array is " << max << endl;
    cout << "Minimum Element in array is " << min << endl;
    return 0;
}