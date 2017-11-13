#include<bits/stdc++.h>
#define INF 2000000000
#define int long long int
#define MOD 1000000007
#define pb push_back
#define cin1(n) (cin >> n)
#define cin2(a,b) (cin >> a >> b)
#define cin3(a,b,c) (cin >> a >> b >> c)
#define cout(n) (cout << n << endl)
#define for_(i,a,b) for(int i=(a);i<(b);++i)
#define fr first 
#define sc second 
#define EPS (1e-10)

using namespace std;

typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef vector<pair<int,int>> vpii;
typedef vector<string> vs;
typedef vector<vector<string>> vss;
typedef pair<int,int> pii;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int n,m;
int a,b;
int p,q;


signed main() {
	int t; cin3(n,m,t);
	
	vi a(n,0);

	for_(i,0,n) {
		cin1(a[i]);
	}

	int ans = 0;

	ans += a[0] - m;
	for_(i,1,n) {
		if (a[i] - a[i-1] > 2 * m) {
			ans += a[i] - a[i-1] - 2 * m;
		}
	}
	if (t - a[n-1] > m) {
		ans += t - a[n-1] - m;
	}
	cout(ans);


	
	return 0;
}



