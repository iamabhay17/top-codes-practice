// print all permutation of string

#include <iostream>
using namespace std;

void permute(string s, int l, int r)
{
    // Base case
    if (l == r)
        cout << s << " ";
    else
    {
        for (int i = l; i <= r; i++)
        {

            // Function to swap
            swap(s[l], s[i]);

            // Recursion called
            permute(s, l + 1, r);

            // backtrack
            swap(s[l], s[i]);
        }
    }
}

int main()
{
    string s;
    cin >> s;
    permute(s, 0, s.length() - 1);
    return 0;
}