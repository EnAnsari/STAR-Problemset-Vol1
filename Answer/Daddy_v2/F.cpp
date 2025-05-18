/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 18.05.2025 19:38:39
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

    a.erase(unique(a.begin(), a.end()), a.end());

    int ans = n - a.size();
    cout << ans << endl;
}