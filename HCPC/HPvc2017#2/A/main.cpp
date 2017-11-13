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
	
	while(1) {
		
		//input
		cin1(n);
		if (n == 0) break;

		vvi g(n,vi(n,0));
		rep(i,0,n) {
			cin1(m);
			rep(j,0,m) {
				cin1(a);
				g[i][a-1] = 1;
			}
		}

		int k; cin1(k);
		vi K(k,0);
		rep(i,0,k) {
			cin1(K[i]);
		}

		//solve
		int sum = 0;
		int ans = 0;
		rep(i,0,n) {
			bool flag = true;
			rep(j,0,k) {
				if (g[i][K[j]-1] == 0) {
					flag = false;
				}
			}
			if (flag) {
				sum++;
				ans = i + 1;
			}

		}
			if (sum == 1) {
				cout(ans);
			}else {
				cout(-1);
			}

		
	

	}

	return 0;
}



