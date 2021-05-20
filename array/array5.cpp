#include <iostream>
using namespace std;

void rearrange(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        if (arr[left] < 0 && arr[right] < 0)
            left++;
        else if (arr[left] > 0 && arr[right] < 0)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        else if (arr[left] < 0 && arr[right] > 0)
        {
            left++;
            right--;
        }
        else
        {
            right--;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}