#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

vector<int> common_digits(vector<int> nums)
{
    set<int> s;
    for (auto num : nums)
    {
        while (num != 0)
        {
            s.insert(num % 10);
            num /= 10;
        }
    }
    vector<int> ans(s.begin(), s.end());
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

    vector<int> ans = common_digits(arr);

    for (auto ele : ans)
        cout << ele << " ";

    return 0;
}