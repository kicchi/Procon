#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	
	int N; cin >> N;
	vector<vector<int>> dp(N,vector<int>(N,-1));
	for (int i = 0; i < N; i++) {
		cin >> dp[0][i];	
	}

	return 0;
}
