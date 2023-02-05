// sum of elements in an array;

#include <iostream>
using namespace std;

int sumOfArr(int arr[], int size)
{
    if (size == 1)
        return arr[0];
    return arr[size - 1] + sumOfArr(arr, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    cout << sumOfArr(arr, size);
    return 0;
}