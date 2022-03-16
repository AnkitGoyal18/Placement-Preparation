#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

int getCount(string S, int N)
{
    int count = 0;
    map<char, int> m;
    loop(i, S.size()) if (S[i] != S[i + 1])
        m[S[i]]++;

    map<char, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
        if (it->second == N)
            ++count;
    return count;
}

int main()
{
    string str;
    int n;
    cin >> str >> n;

    cout << getCount(str, n);

    return 0;
}