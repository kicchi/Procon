#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {

	int k; cin >> k;	
	int t; cin >> t;

	vector<int> a(t);
	int mx = 0;
	int maxi = 0; 
	for (int i = 0; i < t; i++) {
		cin >> a[i];
		if (mx < a[i]) {
			mx = a[i];
			maxi = i;
		}
	}

	
	for (int i = 0; i < t; i++) {
		if (i != maxi) {
			mx -= a[i];
		}
	}
	if (mx <= 0) {
		cout << 0 << endl;	
	}else {
		cout << mx - 1 << endl;
	}
		
	return 0;
}
