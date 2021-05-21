#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n)
{
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter size of array\n";
    cin >> n;
    int arr[n];
    cout << "Enter array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    rotate(arr, n);
    printArray(arr, n);
    return 0;
}