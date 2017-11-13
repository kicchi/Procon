
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
	
	lli n; cin >> n;

	n = n / 2 + 1;

	int p = 1;
	while(n > 1) {
		p *= -1;
		if (p == 1) {
			n = n / 2;
		}else {
			n = n / 2 + n % 2;
		}
	}
	if (p == -1) {
		cout << "Takahashi" << endl;
	}else {
		cout << "Aoki" << endl;
	}
	return 0;
}



