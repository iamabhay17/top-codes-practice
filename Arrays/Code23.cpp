// equibelirium index in array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    int sum = 0, size = 11;
    for (auto i : arr)
    {
        sum += i;
    }

    int sumLeft = 0, sumRight = 0;
    for (int i = 1; i < size; i++)
    {
        sumLeft += arr[i - 1];
        sumRight = sum - sumLeft - arr[i];

        if (sumLeft == sumRight)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}