#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	string str; cin >> str;

	int left = 0;
	int right = str.size() - 1;

	string L = "";
	string R = "";
	char x = 'x';
	int ans = 0;
	while(str.size() > 1) {
		if (str[0] == str[right]) {
			str = str.substr(1,str.size() - 2);
		}else if (str[0] != x and str[right] != x) {
			cout << -1 << endl;
			return 0;
		}else if (str[0] == x) {
			str = str + "x";
			ans++;
		}else if (str[right] == x) {
			str = "x" + str;
			ans++;
		}
		right = str.size() - 1;
	}

	cout << ans << endl;
	return 0;
}
