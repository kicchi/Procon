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
	int x; cin >> x;
	
	int ans = 0;
	int now = 0;
	for (int i = 1; now < x;i++){
		now += i;
		ans = i;
	}
	cout << ans << endl;

	return 0;
}



