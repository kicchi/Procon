#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	int A,B,K; cin >> A >> B >> K;

	set<int> s;
	if (B - A + 1 < K) {
		K = B - A + 1;
	}
	for (int i = A; i < A + K; i++) {
		s.insert(i);
	}
	for (int i = B - K + 1; i <= B; i++) {
		s.insert(i);
	}

	for(auto x: s) {
		cout << x << endl;
	}

	return 0;
}
