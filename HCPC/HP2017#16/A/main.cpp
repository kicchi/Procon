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

int A[1001],B[1001],dp[1024][1024];
int a,b;
int dfs(int x,int y) {
	if (x == a and y == b) return 0;
	if (x == a+1 or y == b+1){
		if ((x+y) % 2 == 1) {
			return -INF;
		}else{
			return INF;
		}
	}
	if (dp[x][y] > 0) return dp[x][y];
	if ((x+y) % 2 == 1) return dp[x][y] = min(dfs(x+1,y),dfs(x,y+1));

	return dp[x][y] = max(dfs(x+1,y) + A[x],dfs(x,y+1) + B[y]);
	
}
int main() {

	cin >> a >> b;

	for (int i = 0; i < a; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < b; i++) {
		cin >> B[i];
	}
	
	cout << dfs(0,0) << endl;


	return 0;
}



