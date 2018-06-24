#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	int A,B,X; cin >> A >> B >> X;

	if (A + B >= X and A <= X) {
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}

	return 0;
}
