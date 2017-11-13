#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {

	long N; cin >> N;
	vector<long> D(N);
	for (int i = 0; i < N; i++) {
		cin >> D[i];
	}
	long M; cin >> M;
	vector<long> T(M);
	for (int i = 0; i < M; i++) {
		cin >> T[i];
	}

	sort(D.begin(),D.end());

	for (int i = 0; i < M; i++) {
		auto it = upper_bound(D.begin(),D.end(),T[i]);
		bool flg = false;
		if (T[i] == *(it-1)){
			flg = true;
			D.erase(it-1);
		}
		if (!flg) {
			cout << "NO" << endl;
			return 0;
		}

	}
	cout << "YES" << endl;

	return 0;
}
