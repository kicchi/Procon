#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {

	int N,M,X; cin >> N >> M >> X;

	int r = 0;
	int l = 0;
	for (int i = 0; i < M; i++) {
		int a; cin >> a;
		if (X < a) {
			r++;
		}else{
			l++;
		}
	}
	cout << min(r,l) << endl;
	return 0;
}
