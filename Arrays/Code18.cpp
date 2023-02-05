// max product subarray

#include <bits/stdc++.h>
using namespace std;

void maxProd(int arr[], int size)
{
    int min_so_far = arr[0];
    int max_so_far = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < size; i++)
    {
        int temp = max({arr[i], arr[i] * min_so_far, arr[i] * max_so_far});
        min_so_far = min({arr[i], arr[i] * min_so_far, arr[i] * max_so_far});
        max_so_far = temp;

        maxVal = max(min_so_far, max_so_far);
    }
    cout << maxVal;
}

int main()
{
    int arr[] = {1, 2, 3, 4, -4, 5, 6, 7};
    int size = 8;
    maxProd(arr, size);
    return 0;
}