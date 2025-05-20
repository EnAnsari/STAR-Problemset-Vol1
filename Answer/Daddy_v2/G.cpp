/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 18.05.2025 23:44:28
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char, int> m;
    for (auto &x : s)
    {
        m[x]++;
    }

    int even = 0, odd = 0;
    for (auto &pair : m)
    {
        if (pair.second % 2)
            odd++;
        else
            even++;
    }

    if (odd % 2)
        cout << "First";
    else
        cout << "Second";
    cout << endl;
}