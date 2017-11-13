//#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<vector>
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
	double n,k; cin >> n >> k;
	
	cout << setprecision(10) <<  (6*(k-1)*(n-k) + 3*(n-1) + 1) / (n*n*n) << endl;
	return 0;
}



