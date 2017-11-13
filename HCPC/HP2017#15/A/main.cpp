#include<bits/stdc++.h>
#define INF 2000000000
#define lli long long int
#define MOD 1000000007
#define pb push_back

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;
int main() {

	int a; cin >> a;
	int b,c; cin >> b >> c;

	int m = min(a,min(b,c));
	int M = max(a,max(b,c));
	if (a == m) {
		cout << 3 << endl;
	}else if(a == M) {
		cout << 1 << endl;
	}else {
		cout << 2 << endl;
	}
	if (b == m) {
		cout << 3 << endl;
	}else if(b == M) {
		cout << 1 << endl;
	}else {
		cout << 2 << endl;
	}
	if (c == m) {
		cout << 3 << endl;
	}else if(c == M) {
		cout << 1 << endl;
	}else {
		cout << 2 << endl;
	}
	return 0;
}



