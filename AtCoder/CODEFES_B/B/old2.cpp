#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	
	int N; cin >> N;
	vector<int> D(N,0);
	int M; cin >> M;
	vector<int> T(M,0);

	map<int,int> mpd,mpt;

	
	for (int i = 0; i < N; i++) {
		mpd[D[i]]++;		
	}
	for (int i = 0; i < M; i++) {
		mpt[T[i]]++;
	}

	for (int i = 0; i < M; i++) {
		if (mpd[T[i]] <  mpt[T[i]]) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;

	return 0;
}
