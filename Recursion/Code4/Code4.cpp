// larget element in array

#include <iostream>
using namespace std;
int large(int arr[], int size)
{
    if (size == 0)
    {
        return arr[0];
    }
    return max(arr[size - 1], large(arr, size - 1));
}

int main()
{
    int arr[] = {19, 2, 3, 4, 5, 6, 17, 8, 9, 0};
    int size = 10;

    cout << large(arr, size);
    return 0;
}