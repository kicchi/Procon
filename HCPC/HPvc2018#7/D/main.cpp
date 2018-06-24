#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	
	int n; cin >> n;

	vector<pair<int,int>> a(n);
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		a[i] = make_pair(t,i+1);
	}

	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		cout << a[n - i - 1].second << endl;
	}
		
	


	return 0;
}
