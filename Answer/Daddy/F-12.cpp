#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e4 + 5;

int n, a[N];

void Main() {
    cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int num = unique(a, a + n) - a;
	cout << n - num << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while(t--) Main();
    Main();
    return 0;
}
/*
	contest name: contest
	problem letter: F
	Time: 2025-05-08 08:44 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	Opportunities don't happen, you create them. ~Chris Grosser

	this code created by rcph (https://github.com/EnAnsari/cph)
*/