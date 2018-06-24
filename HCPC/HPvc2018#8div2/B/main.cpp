#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	
	int n; cin >> n;
	string s; cin >> s;

	if (n % 2 == 0 ) {
		cout << -1 << endl;
		return 0;
	}
	for (int i = 0; i < (n - 1) / 2; i++) { 
		if (s[0] == 'a' and s[(int)s.size() - 1] == 'c') {
			s = s.substr(1,(int)s.size() - 2);	
		}
		else if (s[0] == 'c' and s[(int)s.size() - 1] == 'a') {
			s = s.substr(1,(int)s.size() - 2);	
		}
		else if (s[0] == 'b' and s[(int)s.size() - 1] == 'b') {
			s = s.substr(1,(int)s.size() - 2);	
		}else {
			cout << -1 << endl;
			return 0;
		}
	}
	cout << (n - 1) / 2 << endl;

	return 0;
}
