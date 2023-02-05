// count sum of number in string

#include <iostream>
using namespace std;

int getSum(string s)
{
    int sum = 0;

    for (auto i : s)
    {
        sum += i - '0';
    }
    return sum;
}

int main()
{
    string s;
    cin >> s;

    cout << getSum(s);

    return 0;
}