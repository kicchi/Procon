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
	int k; cin2(n,k);

	
	vvi hune(k);
	for_(i,0,k) {
		int m; cin1(m);
		for_(j,0,m) {
			int bunny; cin1(bunny);
			hune[i].pb(bunny);
		}
	}

	int r; cin1(r);

	set<int> ans;
	for_(i,0,r){
		cin2(p,q);	
		for_(j,0,k) {
			bool pf = false;			
			bool qf = false;			
			for_(l,0,hune[j].size()) {
				if (hune[j][l] == p) {
					pf = true;
				}
				if (hune[j][l] == q) {
					qf = true;
				}
			}
			if (pf and qf) {
				ans.insert(p);
				ans.insert(q);
			}
		}
	}
	cout(ans.size());



	return 0;
}



