/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 18.05.2025 19:09:57
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 1;
    char c = s[0];
    int temp = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == c)
        {
            temp++;
            ans = max(ans, temp);
        }
        else
        {
            c = s[i];
            temp = 1;
        }
    }

    cout << ans << endl;
}