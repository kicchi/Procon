#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	int N,X; cin >> N >> X;

	
	int min_m = 100000;
	for (int i = 0; i < N; i++) {
		int m; cin >> m;
		X -= m;
		min_m = min(m,min_m);
	}
	cout << N + (X / min_m) << endl;

	return 0;
}
