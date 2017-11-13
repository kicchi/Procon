#include<bits/stdc++.h>
#define INF 2000000000
#define int long long int
#define MOD 1000000007
#define pb push_back
#define cin1(n) (cin >> n)
#define cin2(a,b) (cin >> a >> b)
#define cin3(a,b,c) (cin >> a >> b >> c)
#define cout(n) (cout << n << endl)
#define rep(i,a,b) for(int i=(a);i<(b);++i)
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
	cin1(n);
	int x;cin1(x);

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin1(a[i]);
	}

	int ans = 0;
	for (int i = 0; i < n-1; i++) {
		int sum = a[i] + a[i+1];
		if (sum > x) {
			int eat = sum - x;
			ans += eat;
			a[i+1] -= eat;
			/*
			if (a[i+1] < 0) {
				a[i] += a[i+1];
				a[i+1] = 0;
			}
			*/
		}
		//cout << a[i] << endl;
	}
	cout(ans);

	return 0;
}



