// smallest in array

#include <iostream>
using namespace std;

int minIn(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        min = min < arr[i] ? min : arr[i];
    }
    return min;
}

int main()
{
    int arr[] = {2, 3, 4, 6, 7, 1, -3};
    int size = 7;
    cout << minIn(arr, size);
    return 0;
}