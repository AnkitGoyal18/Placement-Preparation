#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

int isPalindrome(string s)
{
    for (int i = 0; i < s.size(); i++)
        if (s[i] != s[s.size() - i - 1])
            return false;
    return true;
}

int main()
{
    string str;
    cin >> str;

    cout << isPalindrome(str);

    return 0;
}