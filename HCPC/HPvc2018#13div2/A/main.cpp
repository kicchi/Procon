#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	
	while(1) {
		int n; cin >> n;
		if(n == 0) break;

		int l = -1;
		int r = -1;
		int ans = 0;
		int flag = -1;
		//1 ue, -1 sita
		for (int i = 0; i < n; i++) {
			string s; cin >> s;
			if(s == "lu") {
				l = 1;
			}else if( s == "ru") {
				r = 1;
			}else if( s == "ld") {
				l = -1;
			}else if( s == "rd") {
				r = -1;
			}
			if (l == r and flag == -1 * l) {
				ans++;
				flag *= -1;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
