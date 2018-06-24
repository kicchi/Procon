#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	while(1) {
		int h,w; cin >> h >> w;
		if (h + w == 0) break;
		int diag = h * h + w * w;

		
		int answ = 150;
		int ansh = 0;
		int min_diag = 150 * 150 * 2;

		for (int i = 1; i <= 150; i++) {
			for (int j = i + 1; j <= 150; j++) {
				int d = i * i + j * j;
				if (diag < d or (diag == d and h < i)) {
					if (d < min_diag) {
						min_diag = d;
						ansh = i;
						answ = j;
					}
				}
			}
		}
		cout << ansh << " " << answ << endl;
	}

	return 0;
}
