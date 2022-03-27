#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

bool isVowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string reverseVowel(string str)
{
    int beg = 0, end = str.length();

    while (beg < end)
    {
        if (!isVowel(str[beg]))
            beg++;
        else if (!isVowel(str[end - 1]))
            end--;
        else
        {
            swap(str[beg], str[end - 1]);
            beg++;
            end--;
        }
    }

    return str;
}

int main()
{
    string str;
    cin >> str;

    cout << reverseVowel(str);

    return 0;
}