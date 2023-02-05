// rotate array by n position

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int n = 3;

    reverse(arr, arr + size);
    reverse(arr, arr + n);
    reverse(arr + n, arr + size);

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}