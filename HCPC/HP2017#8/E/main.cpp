#include<iostream>
#include<vector>
#include<iomanip>
#include<cmath>
#include<algorithm>
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
	int n; cin >> n;

	vi x(n,0);
	vi y(n,0);
	vector<double> c(n,0);

	for (int i = 0; i < n; i++) {
		cin >> x[i];
		cin >> y[i];
		cin >> c[i];
	}

	int M = 0;
	int maxi = 0;
	for (int i = 0; i < n; i++) {
		if (M < c[i] * (max(abs(x[0]-x[i]),abs(y[0]-y[i])))) {
			M = c[i] * (max(abs(x[0]-x[i]),abs(y[0]-y[i])));//ほんとうにc[i]?
			maxi = i;
		}
	}
	int mmax = 0;
	M = 0;
	for (int i = 0; i < n; i++) {
		if (M < c[i] * (max(abs(x[maxi]-x[i]),abs(y[maxi]-y[i])))) {
			M = c[i] * (max(abs(x[maxi]-x[i]),abs(y[maxi]-y[i])));//ほんとうにc[i]?
			mmax = i;
		}
	}

	cout << setprecision(10) << max(abs(x[maxi] - x[mmax]),abs(y[maxi] - y[mmax])) *(c[mmax] / (c[maxi] + c[mmax])) << endl;	



	return 0;
}



