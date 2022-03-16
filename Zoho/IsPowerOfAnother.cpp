#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

int isPowerOfAnother(int X, int Y)
{
    if (X == 1)
        return Y == X;

    if (Y == 1)
        return 1;

    for (int i = 1; i < Y; i++)
        if (pow(X, i) == Y)
            return 1;

    return 0;
}

int main()
{
    int x, y;
    cin >> x >> y;

    cout << isPowerOfAnother(x, y);

    return 0;
}