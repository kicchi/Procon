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
	vector<int> v(100000,0);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (v[a] > 0) {
			v[a]++;
			ans++;
		}else{
			v[a] = 1;
		}
	}

	cout << ans << endl;
	return 0;
}



