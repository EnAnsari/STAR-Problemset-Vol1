#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e2 + 5;

int n, m, a[N], ans;

void Main() {
	ans = 0;
    cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	sort(a, a + n);
	for(int i = 0; i < m; i++)
		if(a[i] >= 0) break;
		else ans += (-a[i]);
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
	problem letter: A
	Time: 2025-05-08 08:44 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	The ones who are crazy enough to think they can change the world, are the ones that do. ~Anonymous

	this code created by rcph (https://github.com/EnAnsari/cph)
*/