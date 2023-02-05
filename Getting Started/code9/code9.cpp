// prime number within given range

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1 || n == 2)
        return true;

    for (int i = 2; i <= sqrt(n); i++)
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
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}