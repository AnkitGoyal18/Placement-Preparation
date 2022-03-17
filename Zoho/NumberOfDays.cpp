#include <bits/stdc++.h>
using namespace std;
#define ll_t long long
#define For(i, j, n, in) for (int i = j; i < n; i += in)
#define loop(i, n) For(i, 0, n, 1)
const ll_t mod = 1e9 + 7;

int countLeapYears(int m, int y)
{
    int years = y;
    if (m <= 2)
        years--;
    return years / 4 - years / 100 + years / 400;
}

int noOfDays(int d1, int m1, int y1, int d2, int m2, int y2)
{
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long int n1 = y1 * 365 + d1;
    for (int i = 0; i < m1 - 1; i++)
        n1 += monthDays[i];

    n1 += countLeapYears(m1, y1);

    long int n2 = y2 * 365 + d2;
    for (int i = 0; i < m2 - 1; i++)
        n2 += monthDays[i];
    n2 += countLeapYears(m2, y2);

    return abs(n2 - n1);
}

int main()
{
    int d1, d2, m1, m2, y1, y2;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    cout << noOfDays(d1, m2, y1, d2, m2, y2);

    return 0;
}