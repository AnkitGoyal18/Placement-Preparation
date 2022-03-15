#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

ll_t reverse(ll_t n)
{
    ll_t ans = 0;
    while (n != 0)
    {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}

bool isPalindrome(ll_t n)
{
    return n == reverse(n);
}

long long isSumPalindrome(long long n)
{
    if (isPalindrome(n))
        return n;

    for (int i = 0; i < 5; i++)
    {
        n += reverse(n);
        if (isPalindrome(n))
            return n;
    }
    return -1;
}

int main()
{
    ll_t n;
    cin >> n;

    cout << isSumPalindrome(n);

    return 0;
}