// C++ program to determine can all numbers of an array be made equal.
// eleent can either be multiplied by 2,3;

#include <iostream>
using namespace std;

bool isEqual(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        while (arr[i] % 2 == 0)
        {
            arr[i] /= 2;
        }
        while (arr[i] % 3 == 0)
        {
            arr[i] /= 3;
        }

        if (arr[i] != arr[0])
            return 0;
    }
    return 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 7};
    int size = 5;

    isEqual(arr, size) ? cout << "Ye" : cout << "No";

    return 0;
}