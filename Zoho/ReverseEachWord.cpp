#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

string reverseWords(string s)
{
    string ans = "";
    stack<char> st;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '.')
            st.push(s[i]);
        else
        {
            while (!st.empty())
            {
                ans += st.top();
                st.pop();
            }
            ans += '.';
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main()
{
    string str;
    cin >> str;

    cout << reverseWords(str);

    return 0;
}