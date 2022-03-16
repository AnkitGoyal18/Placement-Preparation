#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

int isLeap(int n)
{
    return ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);
}

int main()
{
    int n;
    cin >> n;

    cout << isLeap(n);

    return 0;
}