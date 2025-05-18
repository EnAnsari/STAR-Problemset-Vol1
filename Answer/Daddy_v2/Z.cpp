/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 18.05.2025 19:59:20
*/

#include <bits/stdc++.h>
using namespace std;

long long M = 1e10 + 7;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    long long ans = 0, b2 = 3;

    for (int i = 2; i <= n; i++)
    {
        ans = (b2 - ans + M) % M;
        b2 = (b2 * 3 + M) % M;
    }
    cout << ans << endl;
}