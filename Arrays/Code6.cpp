// reversing an array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int low = 0, high = size - 1;

    while (low < high)
    {
        swap(arr[low++], arr[high--]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}