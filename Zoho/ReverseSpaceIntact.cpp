#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

string reverseWithSpacesIntact(string s)
{
    int beg = 0, end = s.size() - 1;

    while (beg < end)
    {
        if (s[beg] == ' ')
            beg++;
        else if (s[end] == ' ')
            end--;
        else
        {
            swap(s[end], s[beg]);
            end--;
            beg++;
        }
    }
    return s;
}

int main()
{
    string str;
    getline(cin, str);

    cout << reverseWithSpacesIntact(str);

    return 0;
}