#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};

void rot(vector<pair<int,int>> &p,int m) {
	for (int i = 0; i < m; i++) {
		int _x = -p[i].second;
		int _y = p[i].first;
		p[i].first = _x;
		p[i].second = _y;
	}
}

bool check(vector<pair<int,int>> v1,vector<pair<int,int>> v2) {
	for (int i = 0; i < v1.size(); i++) {
		if (v1[i] != v2[i]) {
			return false;
		}
	}
	return true;
}

void to_O(vector<pair<int,int>> &v) {
	int sx = v[0].first;
	int sy = v[0].second;
	for (int i = 0; i < v.size(); i++) {
		v[i].first -= sx;
		v[i].second -= sy;
	}
}

void input(vector<pair<int,int>> &v, int m) {
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x >> y;
		v[i] = make_pair(x,y);
	}
}



int main() {

	while(1) {
		int n; cin >> n;
		if (n == 0) break;

		int m; cin >> m;
		vector<pair<int,int>> vo(m);
		input(vo,m);
		to_O(vo);

		for (int i = 1; i <= n; i++) {
			int m; cin >> m;
			bool flg = false;
			vector<pair<int,int>> v(m);
			input(v,m);
			to_O(v);
			for (int j = 0; j < 4; j++) {
				rot(v,m);
				if (check(v,vo)) {
					flg = true;
				}
			}

			reverse(v.begin(),v.end());
			to_O(v);
			for (int j = 0; j < 4; j++) {
				rot(v,m);
				if (check(v,vo)) {
					flg = true;
				}
			}
			if (flg) {
				cout << i << endl;
			}
		}	
		cout << "+++++" << endl;
	}    	
	return 0;
}        	
