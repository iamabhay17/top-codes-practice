// power of a number

#include <iostream>
using namespace std;

int powerOf(int num, int power)
{
    if (power == 1)
    {
        return num;
    }
    return num * powerOf(num, power - 1);
}

int main()
{
    int num, power;
    cin >> num >> power;
    cout << powerOf(num, power);
    return 0;
}