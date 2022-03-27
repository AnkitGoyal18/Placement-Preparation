#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

ll_t doubleTheValue(int n, ll_t b, ll_t arr[])
{
    loop(i, n) if (arr[i] == b) b *= 2;
    return b;
}

int main()
{
    int n;
    ll_t b;
    cin >> n >> b;

    ll_t arr[n];

    loop(i, n)
            cin >>
        arr[i];

    cout << doubleTheValue(n, b, arr);

    return 0;
}