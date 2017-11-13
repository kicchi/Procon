#include<bits/stdc++.h>
#define INF 2147483647
#define lli long long int
#define MOD 1000000007
#define pb push_back

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;


lli power(int a,int b,int M) {
	if (b == 0)return 1;
	lli res = power(a,b/2,M);
	if (b % 2 == 0) {
		return (res%M * res%M) % M;
	}else {
		return (a%M * ((res%M * res%M) % M)) % M;
	}
}

int main() {
	int w,h; cin >> w >> h;

	lli ans1 = 1;
	lli ans2 = 1;

	lli r = 1;
	for (int i = 1; i < min(w,h); i++) {
		r *= i;
		r %= MOD;
	}

	ans1 = power(r,MOD-2,MOD);

	for (int i = w + h - 2; i > max(w,h) - 1; i--) {
		ans2 *= i;
		ans2 %= MOD;
	}

	cout << (ans1%MOD * ans2%MOD) % MOD << endl;

	return 0;
}



