/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 18.05.2025 19:03:06
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }

    int ans = -1;

    for (int i = 2; i < n; i++)
    {
        if (a[i] != a[i - 1] + a[i - 2])
        {
            ans = a[i];
            break;
        }
    }

    cout << ans << endl;
}