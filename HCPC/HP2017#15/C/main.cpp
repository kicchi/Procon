#include<bits/stdc++.h>
#define INF 2000000000
#define lli long long int
#define MOD 1000000007
#define pb push_back

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;
int main() {
	
	vector<vector<char>> s('a',vector<char>('a',4));

	for  (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			char tmp; cin >> tmp;
			s[i][j] = tmp;
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (j == 3) {
				cout << s[3-i][3-j];
			}else {
				cout << s[3-i][3-j] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}



