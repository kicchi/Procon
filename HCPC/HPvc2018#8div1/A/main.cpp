#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {

	int n; cin >> n;
	int a,b; cin >> a >> b;

	while(1) {
		n -= a;
		if (n <= 0) {
			cout << "Ant" << endl;
			return 0;
		}
		n -= b;
		if (n <= 0) {
			cout << "Bug" << endl;
			return 0;
		}
	}

	return 0;
}
