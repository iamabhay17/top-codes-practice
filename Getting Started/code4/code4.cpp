// sum of n natural numbers from range

#include <iostream>
using namespace std;

int main()
{
    int start, end;
    int ans;
    cin >> start >> end;

    ans = (end * (end + 1) / 2) - (start * (start + 1) / 2) + start; // + start to include start number as well
    cout << ans;

    return 0;
}