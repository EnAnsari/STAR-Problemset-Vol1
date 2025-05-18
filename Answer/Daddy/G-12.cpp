#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;

string s;
int n, num[30];

bool first_first_won() {
	int odd = 1;
	for(int i = 0; i < 26; i++)
		odd += (num[i] % 2);
	return (odd <= 1);
}

void Main() {
	memset(num, 0, sizeof(num));
    cin >> s;

	n = s.length();
	for(int i = 0; i < n; i++)
		num[s[i] - 'a']++;
	
	if(first_first_won()) cout << "First\n";
	else if(n % 2) cout << "First\n";
	else cout << "Second\n";
	
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
	problem letter: G
	Time: 2025-05-08 08:44 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	I don't want to get to the end of my life and find that I lived just the length of 
	it. I want to have lived the width of it as well. ~Diane Ackerman

	this code created by rcph (https://github.com/EnAnsari/cph)
*/