// sort

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 6, 3, 7, 3, 5, 4, 1, 4};
    int size = 9;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }

    // printing
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}