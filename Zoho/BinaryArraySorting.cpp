#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

vector<int> SortBinaryArray(vector<int> binArray)
{
    int count = 0;
    loop(i, binArray.size())
    {
        if (binArray[i] == 0)
        {
            count++;
            binArray[i] = 1;
        }
    }

    For(i, 0, count, 1)
        binArray[i] = 0;

    return binArray;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    loop(i, n)
            cin >>
        arr[i];

    arr = SortBinaryArray(arr);

    loop(i, n)
            cout
        << arr[i] << " ";

    return 0;
}