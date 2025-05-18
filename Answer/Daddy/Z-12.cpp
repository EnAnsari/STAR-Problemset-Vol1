#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;
const ll M = 1e9 + 7;

ll n, ans, b3;

void Main() {
    cin >> n;
	if(n == 1) {
		cout << 0 << '\n';
		return;
	}

	ans = 0;
	b3 = 3;
	for(int i = 2; i <= n; i++) {
		ans = (b3 - ans + M) % M;
		b3 = (b3 * 3 + M) % M;
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
	problem letter: Z
	Time: 2025-05-08 10:04 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	Develop success from failures. Discouragement and failure are two of the surest stepping stones to success. ~Dale Carnegie

	this code created by rcph (https://github.com/EnAnsari/cph)
*/