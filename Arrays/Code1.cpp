// larget element in array

#include <iostream>
using namespace std;

int maxIn(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        max = max > arr[i] ? max : arr[i];
    }
    return max;
}

int main()
{
    int arr[] = {9, 1, 2, 4, 12, 4, 1, 4};
    int size = 8;
    cout << maxIn(arr, size);
    return 0;
}