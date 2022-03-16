#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

void printPattern(string s)
{
    string st = "";
    For(i, s.size() / 2, s.size(), 1)
    {
        st += s[i];
        cout << st << "$ ";
    }

    For(i, 0, s.size() / 2, 1)
    {
        st += s[i];
        cout << st << "$ ";
    }
}

int main()
{
    string str;
    cin >> str;

    printPattern(str);

    return 0;
}