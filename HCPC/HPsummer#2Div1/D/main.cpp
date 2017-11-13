#include<bits/stdc++.h>
#define INF 2000000000
#define int long long int
#define MOD 1000000007
#define pb push_back
#define cin1(n) (cin >> n)
#define cin2(a,b) (cin >> a >> b)
#define cin3(a,b,c) (cin >> a >> b >> c)
#define cout(n) (cout << n << endl)
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

int H,W;
vi cnt_func(pair<int,int> N,map<pair<int,int>,bool> cd){
	vi dx = {-1,-1,-1,0,0,0,1,1,1};
	vi dy = {-1,0,1,-1,0,1,-1,0,1};

	vi ret(10,0);
	for (int i = 0; i < 9; i++) {
		pii center = make_pair(N.fr + dy[i],N.sc + dx[i]);	
		if (center.fr == 0 or center.fr == H-1 or center.sc == 0 or center.sc == W-1) {
			continue;
		}

		int cnt = 0;
		for (int j = 0; j < 9; j++) {
			pii c = make_pair(center.fr + dy[j],center.sc + dx[j]);	
			if (cd[c]) {
				cnt++;
			}
				
		}
		ret[cnt]++;
	}
	return ret;
}

signed main() {
	
	
	int n; cin3(H,W,n);


	map<pair<int,int>,bool> cd;
	vpii N;
	for (int i = 0; i < n; i++) {
		cin2(a,b);
		cd[make_pair(a,b)] = true;
		N.pb(make_pair(a,b));
	}
	
	
	vector<int> ans(10,0);
	for (int i = 0; i < n; i++) {
		vi ret(10);
		ret = cnt_func(N[i],cd);		
		for (int j = 0; j < 10; j++) {
			ans[j] += ret[j];
		}
	}

	for (int i = 0; i < 10; i++) {
		cout(ans[i]);
	}
	return 0;
}


