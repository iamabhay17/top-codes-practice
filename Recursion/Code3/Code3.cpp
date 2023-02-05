// largest number in an array
#include <iostream>
using namespace std;

bool inArray(int arr[], int size, int n)
{
    if (size == 0)
    {
        return 0;
    }
    if (arr[size - 1] == n)
        return 1;
    return inArray(arr, size - 1, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;

    int n;
    cin >> n;

    cout << inArray(arr, size, n) ? "It is in array" : "It is not in array";

    return 0;
}