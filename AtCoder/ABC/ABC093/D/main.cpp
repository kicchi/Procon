#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	int Q; cin >> Q;
	for (int i = 0; i < Q; i++) {
		long long  A,B; cin >> A >> B;
		if (A == B or A + 1 == B) {
			cout << 2 * A - 2 << endl;
		}else {
			long long C = sqrt (A * B);
			if (C * C == A * B) C--;
			if (C * (C + 1) >= A * B) {
				cout << 2 * C - 2 << endl;
			}else {
				cout << 2 * C - 1 << endl;
			}
		}
	}

	return 0;
}
