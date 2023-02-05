// leap year ot not

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;

    (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? cout << "Leap Year" : cout << "Not leap year";

    return 0;
}