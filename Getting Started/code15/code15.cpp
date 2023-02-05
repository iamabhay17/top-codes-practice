// armstrong number

#include <bits/stdc++.h>
using namespace std;

int order(int num)
{
    int count;
    while (num != 0)
    {
        count++;
        num = num / 10;
    }
    return count;
}

bool isArmstrong(int num)
{
    int temp = num;
    int sum = 0;
    int power = order(num);
    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + pow(digit, power);
        num = num / 10;
    }
    return sum == temp;
}

int main()
{
    int start, end;
    cin >> start >> end;
    for (int i = start; i <= end; i++)
    {
        if (isArmstrong(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}