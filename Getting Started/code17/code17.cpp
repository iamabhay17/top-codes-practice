// nth term of fibn sequence

#include <iostream>
using namespace std;

int fibn(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibn(n - 1) + fibn(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << "Nth tem of fibnacci sequence is " << fibn(n) << endl;
    return 0;
}