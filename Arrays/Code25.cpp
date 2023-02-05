// balance paranthesis

#include <bits/stdc++.h>
using namespace std;

// isOpen

bool isOpen(char c)
{
    return c == '(' || c == '[' || c == '{';
}

void balance(int arr[], int size)
{
    if (size % 2 != 0)
    {
        cout << "NO it is not balanced";
        return;
    }

    stack<char> st;
    for (int i = 0; i < size; i++)
    {
        if (isOpen(arr[i]))
        {
            st.push(arr[i]);
        }
        else
        {
            char x = arr[i];
            if ((x == ')' && st.top() == '(') || (x == '}' && st.top() == '{') || (x == ']' && st.top() == '['))
            {
                st.pop();
            }
        }
    }

    st.empty() ? cout << "Balanced" : cout << "Not balanced";
}

int main()
{
    int arr[] = {'[', ']', '{', '}', '{', '}', '[', '('};
    int size = 8;

    balance(arr, size);

    return 0;
}