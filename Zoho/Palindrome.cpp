#include <bits/stdc++.h>
using namespace std;

string is_palindrome(int n)
{
    int rev = 0, temp = n;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    return rev == n ? "Yes" : "No";
}

int main()
{
    int n;
    cin >> n;

    cout << is_palindrome(n);

    return 0;
}