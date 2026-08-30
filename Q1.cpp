#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter s :";
        cin >> s;

        stack<char> st;

        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                {
                    cout << "NO" << endl;
                    return 0;
                }

                char top = st.top();
                st.pop();

                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{'))
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }

        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}