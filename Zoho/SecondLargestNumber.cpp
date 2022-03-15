#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

int print2largest(int arr[], int arr_size)
{
    int first = -1, second = -1;

    loop(i, arr_size)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        if (arr[i] > second && arr[i] < first)
            second = arr[i];
    }

    return second;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    loop(i, n)
            cin >>
        arr[i];

    cout << print2largest(arr, n);

    return 0;
}