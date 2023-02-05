// reverse of a number

#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0;
    cin >> num;

    while (num != 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    cout << "reverse is : " << rev;
    return 0;
}