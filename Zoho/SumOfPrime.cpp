#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

int primeSum(int n)
{
    int sum = 0;
    while (n)
    {
        if (n % 10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7)
            sum = sum + n % 10;

        n /= 10;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    cout << primeSum(n);

    return 0;
}