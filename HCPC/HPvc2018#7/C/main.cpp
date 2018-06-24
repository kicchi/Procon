#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	
	long long int a,b,c; cin >> a >> b >> c;

	long long int ans = 1;
	ans *= a;
	ans %= MOD;
	ans *= b;
	ans %= MOD;
	ans *= c;
	ans %= MOD;

	cout << ans << endl;
	return 0;
}
