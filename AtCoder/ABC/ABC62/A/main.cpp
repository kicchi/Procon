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

	if (n == 2 and m == 2) {
		cout("Yes");
	}else if (n == 2 or m == 2) {
		cout("No");
	}else if ((n == 4 or n == 6 or n == 9 or n == 11) and
		(m == 4 or m == 6 or m == 9 or m == 11)) {
		cout("Yes");		
	}else if ((n == 1 or n == 3 or n == 5 or n == 7 or n == 8 or n == 10 or n == 12) and 
				(m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m ==12)) {
		cout("Yes");		
	}else {
		cout("No");
	}

	
	return 0;
}



