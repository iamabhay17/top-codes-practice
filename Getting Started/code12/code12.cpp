// palindrome number

#include <iostream>
using namespace std;

int main()
{
    int num, temp, rev = 0;
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    rev == num ? cout << "Palindrome" : cout << "Not palindrome";

    return 0;
}