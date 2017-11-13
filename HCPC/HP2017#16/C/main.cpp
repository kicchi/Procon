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

int n,w,c;
int N[101],W[101],C[101];


int dfs(int x, int y ) {
	if (
}

int main() {
	
	cin >> n >> w >> c;

	for (int i = 0; i < n; i++) {
		cin >> N[i] >> W[i] >> C[i];
	}

	cout << dfs(0,0) << endl;
	return 0;
}



