#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

string modify(string s)
{
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (!isVowel(s[i]))
        {
            i++;
            continue;
        }
        if (!isVowel(s[j]))
        {
            j--;
            continue;
        }
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

int main()
{
    string str;
    cin >> str;

    cout << modify(str);

    return 0;
}