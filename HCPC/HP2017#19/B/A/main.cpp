
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

int half(int s,int t) {
	return s/2 + t/2;
}

signed main() {
	int c; cin3(a,b,c);

	int ans = 0;
	while(1){
		 if (a % 2 == 1 or b % 2 == 1 or c % 2 == 1) {
			cout(ans);
			return 0;
		}else if (a == b and b == c and c == a) {
			cout(-1);
			return 0;
		}
		int ha,hb,hc;
		ha = half(b,c);
		hb = half(a,c);
		hc = half(b,a);
		a = ha;
		b = hb;
		c = hc;
		ans++;
		
	}
	return 0;
}



