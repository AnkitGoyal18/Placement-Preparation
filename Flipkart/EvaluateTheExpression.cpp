#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

ll_t fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n < 3)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int evaluate(int n)
{
    return fibonacci(n - 1) * fibonacci(n + 1) - fibonacci(n) * fibonacci(n);
}

int main()
{
    int n;
    cin >> n;

    cout << evaluate(n);

    return 0;
}