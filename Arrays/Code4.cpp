// second smallest

#include <iostream>
using namespace std;

void second(int arr[], int n)
{
    int firstSmall = arr[0] < arr[1] ? arr[0] : arr[1];
    int secondSmall = arr[0] > arr[1] ? arr[0] : arr[1];

    for (int i = 2; i < n; i++)
    {
        if (arr[i] <= firstSmall)
        {
            secondSmall = firstSmall;
            firstSmall = arr[i];
            continue;
        }
        if (arr[i] > firstSmall && arr[i] < secondSmall)
        {
            secondSmall = arr[i];
            continue;
        }
    }

    cout << firstSmall << " " << secondSmall;
}

int main()
{
    int arr[] = {-1, 2, -3, 4, 5, -6};
    int n = 6;
    second(arr, n);
    return 0;
}