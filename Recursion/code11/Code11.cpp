#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    int factorial = fact(n);
    while (factorial % 10 == 0)
    {
        factorial /= 10;
    }
    cout << factorial % 10;
    return 0;
}