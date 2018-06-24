#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	int R,C,K; cin >> R >> C >> K; 
	int n; cin >> n;

	vector<int> r(n,0);	
	vector<int> c(n,0);	
	
	vector<int> row(R,0);
	vector<int> cul(C,0);
	for (int i = 0; i < n; i++) {
		cin >> r[i] >> c[i];
		row[r[i]-1]++;
		cul[c[i]-1]++;
	}



	int ans = 0;
	for (int i = 0; i < n; i++) {
		if(row[r[i]-1] + cul[c[i]-1] == K) {
			ans--;
		}else if(row[r[i]-1] + cul[c[i]-1] == K+1) {
			ans++;
		}
	}


	map<int, int>row_table;
	map<int, int>cul_table;

	for (int i = 0; i < R; i++) {
		row_table[row[i]]++;
	}
	for (int i = 0; i < C; i++) {
		cul_table[cul[i]]++;
	}


	for (int i = 0; i <= K; i++) {
		ans += row_table[i] * cul_table[K-i];
		//cout << row_table[i] * cul_table[K-i] << endl;
	}
	cout << ans << endl;
	


	return 0;
}
