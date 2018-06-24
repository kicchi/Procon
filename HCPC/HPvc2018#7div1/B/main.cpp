#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};

bool check(vector<int> v, vector<pair<int,int>> xy) {
	for (int i = 0; i < xy.size(); i++) {
		int x = xy[i].first;
		int y = xy[i].second;
		int x_flag = false;
		int y_flag = false;
		for (int i = 0; i < v.size(); i++) {
			if(v[i] == x) {
				x_flag = true;
			}
			if(x_flag == false and v[i] == y) {
				return false;
			}
		}
	}
	return true;
}

int main() {

	int n,m; cin >> n >> m;
	
	vector<int> v(n,0);
	for (int i = 0; i < n; i++) {
		v[i] = i + 1;
	}

	vector<pair<int,int>> xy(m);
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x >> y;
		xy[i] = make_pair(x,y);
	}

	int ans = 0;
	do {
		if(check(v,xy)) {
			ans++;
		}
	}while(next_permutation(v.begin(), v.end()));
	cout << ans << endl;

	return 0;
}
