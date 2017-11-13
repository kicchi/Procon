#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {

	long n; cin >> n;

	vector<long> ans(n,0);
	vector<long> h(n,0);
	vector<long> l(n,0);

	long old_h = 0;
	vector<long> T(n);
	vector<long> A(n);
	for (int i = 0; i < n; i++) {
		cin >> T[i];	
	}
	for (int i = 0; i < n; i++) {
		cin >> A[i];	
	}

	for (int i = 0; i < n; i++) {
		h[i] = T[i];
		if (T[i] > old_h) {
			ans[i] = 1;
			l[i] = T[i];
		}
		old_h = T[i];
	}

	old_h = 0;
	for (int i = n-1; i >= 0; i--) {
		h[i] = min(A[i],h[i]);
		if (A[i] > old_h) {
			if (h[i] < A[i] || l[i] > A[i]) {
				cout << 0 << endl;
				return 0;
			}
			ans[i] = 1;
		}
		old_h = A[i];
	}

	

	long ANS = 1;
	for (int i = 0; i < n; i++) {
		if (ans[i] == 0) {
			ANS *= h[i] % MOD;	
			ANS %= MOD;
		}
	}

	if (T[n-1] != A[0]) {
		cout << 0 << endl;
	}else {
		cout << ANS << endl;
	}




	return 0;
}
