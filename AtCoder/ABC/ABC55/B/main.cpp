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
	
	int n; cin >> n;
	lli ans = 1;
	for (int i = 1; i <= n; i++){
		ans *= i;
		ans = ans % 1000000007;
	}

	cout << ans << endl;

	return 0;
}



