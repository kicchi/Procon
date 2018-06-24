#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	
	int N; cin >> N;
	
	vector<int> x(N,0);
	for (int i = 0; i < N; i++) {
		cin >> x[i];
	}
	vector<int> tmp = x;
	sort(tmp.begin(), tmp.end());
	int l = tmp[(N/2) - 1];
	int r = tmp[(N/2)];

	for (int i = 0; i < N; i++) {
		if (x[i] <= l) {
			cout << r << endl;
		}else {
			cout << l << endl;
		}
	}

	return 0;
}
