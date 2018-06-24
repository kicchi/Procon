#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	int N; cin >> N;
	vector<int> a(N,0);
	int n = 0;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
		if (n < a[i]) {
			n = a[i];
		}
	}
	sort(a.begin(), a.end());
	
	int r = n;
	int min_d = n;
	for (int i = 0; i < N-1; i++) {
		double dt = abs(((double)a[i] - (double)n / 2));
		//cout << dt << " = " << "abs(" << a[i] << " - " << (double)n/2 << ")" << endl;
		if (min_d > dt) {
			min_d = dt;
			r = a[i];
		}
	}
	cout << n << " " << r << endl;
	return 0;
}
