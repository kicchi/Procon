#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	string s; cin >> s;

	if (s[0] == 'Y' and s[1] == 'A' and s[2] == 'K' and s[3] == 'I') {
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;
	}
	return 0;
}
