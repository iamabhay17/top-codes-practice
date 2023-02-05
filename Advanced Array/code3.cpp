// Move all the negative elements to one side of the array

#include <bits/stdc++.h>
using namespace std;

void moveElement(vector<int> &vec)
{
    int moveTo = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] < 0)
        {
            swap(vec[i], vec[moveTo]);
            moveTo++;
        }
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, -1, -2, -3};
    moveElement(vec);
    for (auto i : vec)
    {
        cout << i << " ";
    }
    return 0;
}