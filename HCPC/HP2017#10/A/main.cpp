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
	int n; cin >> n;

	vector<string> name(n);
	vi p(n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> name[i];
		cin >> p[i];
		sum += p[i];
	}

	string ans = "atcoder";
	for (int i = 0; i < n; i++) {
		if (p[i] >= (sum/2) + 1) {
			ans = name[i];
		}
	}
	cout << ans << endl;


	

	return 0;
}



