
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

	int a,b;
	cin >> a >> b;
	if (a%b == 0) {
		cout << 0 << endl;	
	}else{
		cout << b - a%b << endl;
	}
	return 0;
}



