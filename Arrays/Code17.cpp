// counting num of odd and even elem in array

#include <iostream>
using namespace std;

bool isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ev = 0, odd = 0;

    for (auto i : arr)
    {
        if (isEven(i))
            ev++;
        else
            odd++;
    }
    cout << "EVen :" << ev << "\tOdd:" << odd;
    return 0;
}