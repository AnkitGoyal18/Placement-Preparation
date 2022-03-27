#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

vector<int> valueEqualToIndex(vector<int> arr, int n)
{
    vector<int> ans;

    loop(i, n) if (arr[i] == i + 1)
        ans.push_back(i + 1);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    loop(i, n)
            cin >>
        arr[i];

    vector<int> ans = valueEqualToIndex(arr, n);

    for (auto x : ans)
        cout << x << " ";

    return 0;
}