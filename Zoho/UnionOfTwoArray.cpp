#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

int doUnion(int a[], int n, int b[], int m)
{
    set<int> s;
    loop(i, n)
        s.insert(a[i]);
    loop(i, m)
        s.insert(b[i]);

    return s.size();
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    loop(i, n)
            cin >>
        a[i];

    loop(i, m)
            cin >>
        b[i];

    cout << doUnion(a, n, b, m);

    return 0;
}