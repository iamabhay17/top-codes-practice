// strong number

#include <iostream>
using namespace std;

int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num * fact(num - 1);
}

int main()
{
    int num, sum = 0;
    cin >> num;
    int temp = num;

    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + fact(digit);
        num = num / 10;
    }

    sum == temp ? cout << "STrong number" : cout << "Not strong number";

    return 0;
}