// reversing a number

#include <iostream>
using namespace std;

void rev(int n)
{
    if (n < 10)
    {
        cout << n;
        return;
    }

    cout << n % 10;
    return rev(n / 10);
}

int main()
{
    int n;
    cin >> n;
    rev(n);
    return 0;
}