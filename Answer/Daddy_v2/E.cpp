/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 18.05.2025 19:24:46
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;

    while (n > 9)
    {
        cnt++;
        int temp = 0;
        while (n > 9)
        {
            temp += n % 10;
            n /= 10;
        }
        temp += n;
        n = temp;
    }
    cout << cnt << endl;
}