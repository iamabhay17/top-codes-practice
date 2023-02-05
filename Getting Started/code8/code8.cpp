// prime number or not

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, flag = 0;
    cin >> a;

    for (int i = 2; i < sqrt(a); i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            cout << " not Prime number";
            break;
        }
    }

    if (flag == 0)
    {
        cout << "prime";
    }

    return 0;
}