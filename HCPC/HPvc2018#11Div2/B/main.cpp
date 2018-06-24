#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	
	string s; cin >> s;

	while(s.size() != 0) {
		
		if(s[(int)s.size() - 2] == 'c' and s[(int)s.size() - 1] == 'h') {
			s = s.substr(0,(int)s.size() - 2);
		}else if (s[(int)s.size() -1] == 'o') {
			s = s.substr(0,(int)s.size() - 1);
		}else if (s[(int)s.size() -1] == 'k') {
			s = s.substr(0,(int)s.size() - 1);
		}else if (s[(int)s.size() -1] == 'u') {
			s = s.substr(0,(int)s.size() - 1);
		}else {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;

	return 0;
}
