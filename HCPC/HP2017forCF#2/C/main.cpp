#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {

	long W,H; cin >> W >> H;
	vector<long> p(W),q(H);

	for (int i = 0; i < W; i++) {
		cin >> p[i];
	}
	for (int i = 0; i < H; i++) {
		cin >> q[i];
	}

	sort(p.begin(),p.end());
	sort(q.begin(),q.end());

	int i = W + 1;
	int j = H + 1;
	while(i >= 0 || j >= 0) {
		
	}
	
	return 0;
}
