#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {

	int A,B,C; cin >> A >> B >> C;
	vector<int> v = {A,B,C};

	sort(v.begin(), v.end());

	int ans = 0;
	
	ans += v[2] - v[1];
	v[0] += v[2] - v[1];
	if ((v[2] - v[0] ) % 2 == 1) {
		ans += ((v[2] - v[0]) / 2) + 2;
	}else {
		ans += ((v[2] - v[0]) / 2);
	}

	cout << ans << endl;
	return 0;
}
