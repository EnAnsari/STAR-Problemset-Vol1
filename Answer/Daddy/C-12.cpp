#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;

int a, b, n, m;

void Main() {
    cin >> n >> m >> a >> b;
	cout << min(ceil(n / (a * 1.0)) * ceil((m / (b * 1.0))), ceil(m / (a * 1.0)) * ceil(n / (b * 1.0))) << '\n';
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
	problem letter: C
	Time: 2025-05-08 08:44 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	Success does not consist in never making mistakes but in never making the same one a second time. ~George Bernard 
	Shaw

	this code created by rcph (https://github.com/EnAnsari/cph)
*/