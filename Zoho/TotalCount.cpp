#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

int totalCount(int arr[], int n, int k)
{
    int ans = 0;
    loop(i, n)
    {
        ans += arr[i] / k;
        if (arr[i] % k)
            ans++;
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];

    loop(i, n)
            cin >>
        arr[i];

    cout << totalCount(arr, n, k);

    return 0;
}