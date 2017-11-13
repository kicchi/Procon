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

	int n; cin >> n;

	string str = "123456";
	
	int A,B;

	int m = n % 30;
	for (int i = 0; i < m; i++) {
		A = (i % 5);
		B = (i % 5) + 1;

		char tmp = str[A];
		str[A] = str[B];
		str[B] = tmp;
	}

	cout << str << endl;
	return 0;
}



