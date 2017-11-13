#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	
	int n,m,k; cin >> n >> m >> k;

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			int num = (n * j - j * i) + (i * (m - j));
			if (num == k) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
