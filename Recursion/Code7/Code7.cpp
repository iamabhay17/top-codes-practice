// lcm of two number

#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b)
        return hcf(a - b, b);

    return hcf(a, b - a);
}
int lcm(int a, int b)
{
    return (a * b) / hcf(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;
}
