//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<list>
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

	vi boss(n,0);
	vi sal(n,1);
	
	boss[0] = 0;
	for (int i = 1; i < n; i++) {
		cin >> boss[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		int max = -1;
		int min = INF;
		bool flag = false;

		for (int j = n; j>= 0; j--) {
			if (boss[j] == i + 1) {
				flag = true;
				if(max < sal[j]) max = sal[j];
				if(min > sal[j]) min = sal[j];
			}
		}
		if (flag) sal[i] = max + min + 1;
	}

	cout << sal[0] << endl;

	return 0;
}



