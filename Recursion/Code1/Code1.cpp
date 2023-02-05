// power of a number using recursion

#include <iostream>
using namespace std;

double power(int n, int p)
{
    if (p == 1)
    {
        return n;
    }
    return n * power(n, p - 1);
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << power(n, p);
    return 0;
}