#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {

	int N,K; cin >> N >> K;
	vector<int> v(N,0);

	int m = 1000000;
	int l = 0;
	int r = 0;
	for (int i = 0; i < N; i++) {
		cin >> v[i];
			if (m > v[i]) {
				m = v[i];
			}
	}
	for (int i = 0; i < N; i++) {
		if (v[i] == m) {
			l = i;
			break;
		}
	}
	for (int i = 0; i < N; i++) {
		if (v[i] == m) {
			r = i;
		}
	}
	//left direcction
	while (0 < i) {
		for (int i = l; i > l - K; i--) {
			v[i] = m;
		}
	}



	return 0;
}
