#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<sstream>
#include<queue>
#include<cmath>
#include<algorithm>
#include<stack>
#include<map>
#include<set>
#include<iomanip>
#define INF 2147483647
#define lli long long int

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;
int main() {
	lli n,m; cin >> n >> m;
	lli s = n;
	lli c = m;

	lli  ans = 0;
	if (n * 2 < m){
		ans += n;
		m -= 2 * n;
		ans += m / 4;
	}else{
		ans += m / 2;	
	}
	cout << ans << endl;
	return 0;
}



