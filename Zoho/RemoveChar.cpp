#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

string removeChars(string string1, string string2)
{
    string ans = "";

    for (char i : string1)
        if (string2.find(i) == -1)
            ans += i;

    return ans;
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    cout << removeChars(str1, str2);

    return 0;
}