//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<iomanip>
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
	double n,m; cin >> n >> m;

	double ans_n = n * 30 + ((m/60) * 30);
	double ans_m = m * 6;
	double ans = fabs(fmod(ans_n,360) - ans_m);
	cout << setprecision(8) << min(ans,abs(360 - ans)) << endl;

	return 0;
}



