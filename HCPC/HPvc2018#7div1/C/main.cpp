#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	
	string s; cin >> s;
		
	int l = s.size();

	if (l % 2 == 0 and s[0] == s[l - 1]) {
		cout << "First" << endl;
	}else if (l % 2 == 0 and s[0] != s[l -1]) {
		cout << "Second" << endl;
	}else if (l % 2 != 0 and s[0] == s[l -1]) {
		cout << "Second" << endl;
	}else if (l % 2 != 0 and s[0] != s[l -1]) {
		cout << "First" << endl;
	}


	return 0;
}
