#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e3 + 5;

int n, a[N], ans, curr;

void Main() {
    cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];

	ans = curr = 1;
	for(int i = 1; i < n; i++) {
		if(a[i] == a[i - 1]) curr++;
		else curr = 1;
		ans = max(ans, curr);
	}
	cout << ans << '\n';
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
	problem letter: D
	Time: 2025-05-08 08:44 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	A successful man is one who can lay a firm foundation with the bricks others have thrown at him. ~David 
	Brinkley

	this code created by rcph (https://github.com/EnAnsari/cph)
*/