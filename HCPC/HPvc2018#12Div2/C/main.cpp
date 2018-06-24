#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	
	while(1) {
		int M,T,P,R; cin >> M >> T >> P >> R;

		vector<int> AC(T,0); //各チームの解答数
		vector<int> TIME(T,0); //各チームの時間点数
		vector<int> PENALTY(T,0); //各チームの
		vector<int> WA(T,vector<int>(P,0)); //各チームの各問題の間違った回数
		for (int i = 0; i < R; i++) {
			int m,t,p,j; cin >> m >> t >> p >> j;
			if (j == 0) {
				WA[t-1][p-1] += 1;
			}else if (j == 1) {
				AC[t-1]++;
				TIME[t-1] = m;
				//WA[t-1][p-1] * 20 + m; 
			}
		}
		
	}

	return 0;
}
