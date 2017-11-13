#include<bits/stdc++.h>
#define INF 2000000000
#define lli long long int
#define MOD 1000000007
#define pb push_back

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;

int dp[100001];
int n,m;


int prev(int c ,int idx ,int left ,vi f ) {
	if (idx == 1) return 1;
	for (int i = left; i < idx; i++) {
		if (f[i] == c) {
			return i;
		}
	}
}

void printv(vi v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
		}cout << endl;
		return ;
		}

int main() {
	
	cin >> n >> m;

	
	vi last_appear(n,0);
	vi M(m,0);
	vi f(n,0);
	for (int i = 0 ; i < n; i++) {
		cin >> f[i];
		last_appear[i] = M[f[i]-1];
		M[f[i]-1] = i+1;
	}
	printv(last_appear);

	dp[0] = 1; 
	int left = 0;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += dp[i-1];
		dp[i] += sum;		
		if (last_appear[i-1] != 0) {
			//cout << "hoge" << endl;
			dp[i] -= dp[last_appear[i-1]];
		}
		cout << dp[i] << endl;
	}

	cout << (dp[n] - dp[n-1]) % MOD << endl;

	return 0;
}


