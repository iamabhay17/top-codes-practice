// factorof a number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}