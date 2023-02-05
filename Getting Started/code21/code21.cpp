// find prime factor of a number

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0 && isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}