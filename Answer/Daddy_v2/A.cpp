/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 18.05.2025 19:01:46
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }

    sort(a.begin(), a.end());

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[i] < 0)
            ans -= a[i];
    }

    cout << ans << endl;
}