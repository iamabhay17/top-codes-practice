// longest palindrome in arraay

#include <iostream>
using namespace std;

bool isPalin(int num)
{
    int temp = num;
    int rev = 0;
    while (num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }
    return temp == rev;
}

int main()
{
    int arr[] = {1, 222, 3333, 44444, 555};
    int size = 5;
    int maxVal = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (isPalin(arr[i]))
        {
            maxVal = max(maxVal, arr[i]);
        }
    }
    cout << maxVal;
    return 0;
}