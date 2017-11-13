#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {

	int h,w; cin >> h >> w;

	vector<string> A(h);

	for (int i = 0; i < h; i++) {
		cin >> A[i];
	}

	vector<int> alp(26,0);
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			alp[(int)(A[i][j])-97]++;
		}
	}

	if (h % 2 == 0 and w % 2 == 0) {
		for (int i = 0; i < 26	; i++) {
			if (alp[i] % 4 != 0) {
				cout << "No" << endl;
				return 0;
			}
		}
	}else if ((h + w) % 2 == 1) {
		int even_cnt = 0;
		for (int i = 0; i < 26; i++) {
			if (alp[i] % 2 == 1) {
				cout << "No" << endl;
				return 0;
			}
			if ((alp[i]%4) / 2 == 1) {
				even_cnt++;	
			}
		}
		int center;
		if (h % 2 == 0) {
			center = h;	
		}else if (w % 2 == 0) {
			center = w;
		}
		if (even_cnt > (center/2)) {
			cout << "No" << endl;
			return 0;
		}
	}else {
		int even_cnt = 0;
		int odd_cnt = 0;
		for (int i = 0; i < 26; i++) {
			if ((alp[i]%4) / 2 == 1) {
				even_cnt++;	
			}else if (alp[i] % 2 == 1) {
				odd_cnt++;
			}
		}
		if (even_cnt > (h/2) + (w/2)) {
			cout << "No" << endl;
			return 0;
		}else if (odd_cnt != 1) {
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;
}
