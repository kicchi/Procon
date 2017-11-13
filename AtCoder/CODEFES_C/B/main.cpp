#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	int n; cin >> n;

	long sub = 1;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (a % 2 == 0) {
			sub *= 2;
		}
	}
	cout << pow(3,n) - sub << endl;


	return 0;
}
