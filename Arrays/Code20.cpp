// find if array is subset of another array;

#include <iostream>
using namespace std;

bool isSubset(int arr1[], int arr2[], int n, int m)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arr2[j])
        {
            j++;
        }
        else
            j = 0;
    }
    return j == m;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {5, 7, 6};
    int n = 7;
    int m = 3;

    isSubset(arr, arr2, n, m) ? cout << "Yes" : cout << "NO";

    return 0;
}