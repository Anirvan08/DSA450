#include <bits/stdc++.h>
using namespace std;
void sort012(int a[], int n)
{

    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[low], a[mid]);
            low++;
            mid++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(a[mid], a[high]);
            high--;
            break;
        }
    }
}
int main()
{
    int arr[10] = {1, 2, 0, 0, 1, 1, 2, 0, 0, 1};
    sort012(arr, 10);
    cout << "Array after sorting is" << endl;
    for (int i = 0; i < 10; i++)
        cout << arr[i] << "\t";

    return 0;
}