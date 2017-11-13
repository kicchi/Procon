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
	int r,c,k; cin3(r,c,k);
	cin1(n);

	vi yoko(c,0);
	vi tate(r,0);
	//vector<pair<int , pair<int,int>>> ame(n);;
	set<pii> ame;
	vector<vector<bool>> masu(n,vactro<bool>);

	for_(i,0,n) {
		int x,y; cin2(y,x);
		yoko[x-1]++;
		tate[y-1]++;
		ame.insert(make_pair(y,x));
	}

	int ans = 0;
	for_(i,0,r) {
		if (tate[i] > k) continue;
		for_(j,0,c) {
			if (yoko[j] > k) continue;	
			pii loc = make_pair(j,i);
			set<pii>::iterator it = ame.find(loc);
			bool flag = false;
			if (it != ame.end()) {
				flag = true;	
			}
			if (!flag and yoko[j] + tate[i] == k) {
				ans++;	
			}else if(flag and yoko[j] + tate[i] == k+1) {
				ans++;
			}
		}
	}

	cout(ans);


	return 0;
}



