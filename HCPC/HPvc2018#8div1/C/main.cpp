#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	int r,c,k; cin >> r >> c >> k;
	int n; cin >> n;

	vector<int> r_i(r,0);	
	vector<int> c_j(c,0);	
	vector<vector<int>> candy(r+1,(vector<int>(c+1,0)));
	
	int R = 0;
	int C = 0;
	for (int i = 0; i < n; i++) {
		cin >> R >> C;
		r_i[R-1]++;
		c_j[C-1]++;
	}


	int ans = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			//cout << "i = " << i <<  " j = " << j << " " << r_i[i] + c_j[j] << endl;
			//cout << "i = " << i <<  " j = " << j << " " << r_i[i] << " " <<  c_j[j] << endl;
			if (r_i[i] + c_j[j] == k) {
				ans++;
			}
		}
	}
	cout << ans << endl;

	return 0;
}
