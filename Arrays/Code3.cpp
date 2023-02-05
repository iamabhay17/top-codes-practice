// smallest and largest element in array;

#include <iostream>
using namespace std;

void smallLarge(int arr[], int size)
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        min = min < arr[i] ? min : arr[i];
        max = max > arr[i] ? max : arr[i];
    }
    cout << min << " " << max;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, -1, 4};
    int size = 7;
    smallLarge(arr, size);
    return 0;
}