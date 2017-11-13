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
	cin2(n,m);
	
	if (n > m) {
		int tmp = n;
		n = m;
		m = tmp;
	}
	if (n % 3 == 0 or m % 3 == 0) {
		cout(0);
	}else if (n % 2 == 0) {
		int _min = 1000000;
		for_(i,0,m+1) {
			if (_min > abs(n*i - ((m-i)*(n/2)))) {
				_min = abs(n*i - ((m-i)*(n/2)));
			}
		}
		cout(_min);
	}else {
		int _min = 1000000;
		for_(i,0,m+1) {
			if (_min > abs(n * i - (m - i) * ((n/2))))  {
				_min = abs(max(n * i,(m-i) * ((n/2) + 1)) - (m - i) * ((n/2)));	
			}
		}
		cout(_min);
	}
	return 0;
}



