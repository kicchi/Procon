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
	vi r(n);
	for (int i = 0; i < n; i++){
		cin >> r[i];
	}
	sort(r.begin(),r.end());

	int minus = 1;
	double sum = 0;
	for (int i = 0; i < n; i++){
		sum += minus * r[i] * r[i];
		minus *= -1;
	}
	minus *= -1;
	cout << setprecision(15) << minus * sum  * M_PI << endl;

	return 0;
}



