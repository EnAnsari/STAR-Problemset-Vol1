#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;

int n, ans;

int func(int x) {
	int summ = 0;
	while(x > 0) {
		summ += x % 10;
		x /= 10;
	}
	return summ;
}

void Main() {
    cin >> n;

	ans = 0;
	while(n >= 10) {
		n = func(n);
		ans++;
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
	problem letter: E
	Time: 2025-05-08 08:44 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	You can't connect the dots looking forward; you can only connect them looking backwards. So you have to trust that 
	the dots will somehow connect in your future. You have to trust in something - your gut, destiny, life, karma, 
	whatever. This approach has never let me down, and it has made all the difference in my life. ~Steve Jobs

	this code created by rcph (https://github.com/EnAnsari/cph)
*/