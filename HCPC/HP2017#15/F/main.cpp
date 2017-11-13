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

int func(vi l,vi r,vi s,vi t,int i) {
	for (int j = 0; j < l.size(); j++) {
		if (l[j] <= s[i] and s[i] <= r[j]) {
			if (l[j] <= t[i] and t[i] <= r[j]) {
				return j+1;
			}
			if (abs(t[i] - l[j]) < abs(t[i] - r[j])) {
				s[i] = l[j];
				//cout << s[i] << endl;
			}else {
				s[i] = r[j];
				//cout << s[i] << endl;
			}
		}

	}
}

int main() {
	
	int  n,d,k; cin >> n >> d >> k;

	vi l(d,0);
	vi r(d,0);
	vi s(k,0);
	vi t(k,0);
	for (int i = 0; i < d; i++) {
		cin >> l[i] >> r[i];
	}

	for (int i = 0; i < k; i++) {
		cin >> s[i] >> t[i];
	}

	for (int i = 0; i < k; i++) {
		cout << func(l,r,s,t,i) << endl;;
	}
	

	return 0;
}



