#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

bool isSubSequence(string a, string b)
{
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] == b[j])
        {
            i++;
            j++;
        }
        else
            j++;
    }
    return i == a.size();
}

int main()
{
    string a, b;
    cin >> a >> b;

    cout << isSubSequence(a, b);

    return 0;
}