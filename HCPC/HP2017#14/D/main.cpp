#include<bits/stdc++.h>
#define INF 2147483647
#define lli long long int
#define MOD 1000000007
#define pb push_back

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;
int main() {
	
	string str; cin >> str;

	bool flag = true;
	for (int i = 0; i < str.size(); i++ ) {
		if (str[i] == 'c' and str[i+1] == 'h' and i != str.size() - 1) {
			i++;
		}else if (str[i] =='o') {
		}else if (str[i] =='k') {
		}else if (str[i] =='u') {
		}else {
			flag = false;
		}
	}
	if(flag) {
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
	return 0;
}



