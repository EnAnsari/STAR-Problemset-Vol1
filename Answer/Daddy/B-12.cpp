#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e3 + 5;

int n, a[N];

void Main() {
    cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 2; i < n; i++) {
		if(a[i - 1] + a[i - 2] != a[i]) {
			cout << a[i] << '\n';
			return;
		}
	}
	cout << -1 << '\n';
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
	problem letter: B
	Time: 2025-05-08 08:44 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	No one can make you feel inferior without your consent. ~Eleanor Roosevelt

	this code created by rcph (https://github.com/EnAnsari/cph)
*/