#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {

	string s; cin >> s;
	int ans = 0;
	for (int i = 0; i < 4; i++) {
		if (s[i] == '+') {
			ans++;
		}else {
			ans--;
		}
	}
	cout << ans << endl;
	return 0;
}
