#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

int count(int arr[], int n, int x)
{
    int l = lower_bound(arr, arr + n, x) - arr;
    int h = upper_bound(arr, arr + n, x) - arr;
    return h - l;
}

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    loop(i, n)
            cin >>
        arr[i];

    cout << count(arr, n, x);

    return 0;
}