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
	cin1(n);

	vi a(n,0);
	int sum = 0;
	for_(i,0,n) {
		cin1(a[i]);	
		sum += a[i];
	}

	int p = sum / n;
	int ans = 0;
	if (sum % n != 0) {
		cout(-1);
		return 0;
	}else {
		for_(i,0,n-1) {
			if (a[i] != p) {
				a[i+1] += a[i] - p;
				ans++;
			}
		}
	}
	cout(ans);




	return 0;
}



