#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	string s; cin >> s;
	int a = 0;
	int b = 0;
	int c = 0;
	for (int i = 0; i < s.size(); i++) {
		if(s[i] == 'a') {
			a++;
		}else if (s[i] == 'b') {
			b++;
		}else {
			c++;
		}
	}
	if (a == 1 and b == 1 and c == 1) {
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;	
	}

	return 0;
}
