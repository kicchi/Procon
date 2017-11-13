//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#define INF 2147483647
#define lli long long int
#define MOD 1000000007
#define pb push_back

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;
int main() {
	lli n; cin >> n;

	lli ans = 1;

	for (int i = 1; i <= n; i++) {
		ans *= i;
		ans %= MOD;
	}
	cout << ans << endl;
	return 0;
}



