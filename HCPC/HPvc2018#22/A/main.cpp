#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	double a,b; cin >> a >> b;
	a = min(a,b);
	b = max(a,b);
	double t;
	if (b-a < 180) {
		t = (b-a) / 2;
		cout <<setprecision(10)<< (a + b) / 2 << endl;
	}else {
		t = (360 - (b-a))/2;
		cout <<  setprecision(10) << fmod(b + t,360) << endl;
	}
	return 0;
}
