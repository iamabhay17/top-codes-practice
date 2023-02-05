// sum of subsets of an array usng recursion

#include <iostream>
using namespace std;

void subsetSum(int arr[], int l, int r, int sum = 0)
{
    if (l > r)
    {
        cout << sum << " ";
        return;
    }
    subsetSum(arr, l + 1, r, sum + arr[l]);
    subsetSum(arr, l + 1, r, sum);
}

int main()
{
    int arr[] = {1, 2, 3};
    int size = 3;
    subsetSum(arr, 0, size - 1);
    return 0;
}