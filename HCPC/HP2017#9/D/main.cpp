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

int main() {

	int n,m; cin >> n >> m;
	vvi d(n,vi(n,MOD));
	vvi edge(n,vi(n,MOD));
	vvi used(n,vi(n,1));
	for (int i = 0; i < m; i++) {
		int a,b,c; cin >> a >> b >> c;
		d[a-1][b-1] = c;
		d[b-1][a-1] = c;
		edge[a-1][b-1] = c;
		edge[b-1][a-1] = c;
		used[a-1][b-1] = 0;
		used[b-1][a-1] = 0;
	}

	for (int i = 0; i < n; i++) {
		d[i][i] = 0;
	}

	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (d[i][j] == edge[i][j]) {
				used[i][j] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (used[i][j] == 0) {
				ans++;
			}
		}
	}
	cout << ans << endl;
	
	return 0;
}



