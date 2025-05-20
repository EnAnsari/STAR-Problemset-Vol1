/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 18.05.2025 19:06:52
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, n, m;
    cin >> n >> m >> a >> b;
    long long ans = min((ceil(n / a) * ceil(m / b)), (ceil(n / b) * ceil(m / a)));
    cout << ans << endl;
}