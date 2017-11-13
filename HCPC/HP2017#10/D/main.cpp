#include<bits/stdc++.h>
#define INF 2147483647
#define lli long long int
#define MOD 1000000007
#define pb push_back

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;

int X,Y;
int D;
int dfs(int x, int y,int n) {
	int ans = 0;
	if (x == X and y == Y and n == 0) return 1;
	if (n == 0) return 0;

	vi dx = {-1,0,1,0};
	vi dy = {0,-1,0,1};
	n--;
	for (int i = 0; i < 4; i++) {
		ans += dfs(x+dx[i]*D,y+dy[i]*D,n);	
	}

	return ans;
}
int main() {

	int N;cin >> N;
	cin >> D;
	cin >> X >> Y;
	
	double ans = dfs(0,0,N) / pow(4,N);
	cout << setprecision(10) <<  ans << endl;
	
	return 0;
}



