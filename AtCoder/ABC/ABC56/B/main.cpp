#include<bits/stdc++.h>
#define INF 2147483647
#define lli long long int
#define MOD 1000000007
#define pb push_back

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;
int main() {
	int w,a,b; cin >> w >> a >> b;

	if (a + w < b){
		cout << b - a - w << endl;
	}else if (b + w < a){
		cout << a - b - w << endl;
	}else{
		cout << 0 << endl;
	}

	return 0;
}



