// sum of digits of a number

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cin >> num;
    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    cout << "Sum is : " << sum;
    return 0;
}