#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

int sumOfMatrix(int n, int m, vector<vector<int>> mat)
{
    int sum = 0;
    loop(i, n)
        loop(j, m)
            sum += mat[i][j];
    return sum;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    loop(i, n)
            loop(j, m)
                cin >>
        mat[i][j];

    cout << sumOfMatrix(n, m, mat);

    return 0;
}