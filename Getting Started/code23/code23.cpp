// perfect number

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    sum == num ? cout << "Perfect" : cout << "Not PErfect";
    return 0;
}