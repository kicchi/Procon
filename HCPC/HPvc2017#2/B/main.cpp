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

int num = 100000;
vi prime(num,0);
void era (vi &v) {
	v[0] = 1,v[1] = 1;
			
	for (int i = 2; i <= num; i++) {
		if (v[i] == 0) {
			for (int j = 2; j < num/i; j++) {
				v[i*j]= 1;
			}
		}
	}
	return ;
}

bool isPrime(int n){ 
		if (n < 2) return false;
		if (n == 2) return true;
		for (int i = 2; i <= sqrt(n) + 1; i++){
				if (n % i == 0) return false;
		}   
		return true;
}

signed main() {
	
	era(prime);
	vi pl(100001);
	int idx = 1;
	rep(i,1,prime.size()) {
		if (prime[i] == 0) {
			pl[idx] = i;
			idx++;
		}
	}
	while(1) {
		cin2(n,m);
		if (n + m == -2) break;
		idx = 1;	
		
		vi M(120000);
		rep(i,1,m+1) {
			rep(j,i,m=1) {
				M[(i-1)*m+j] = pl[idx+i-1]+pl[idx+j-1];
			}
		}
		sort(M.begin(),M.end());
		idx = 0;
		while(M[idx] == 0) {
			idx++;
		}
		cout(M[idx + m - 1]);
	}

	return 0;
}



