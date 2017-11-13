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
#define INF 2147483647
#define lli long long int

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;
int main() {
	int n; cin >> n;
	
	vi island(n);
	int sum = 0;
	for (int i = 0; i < n; i++){
		cin >> island[i];
		sum += island[i];
	}
	
	int ans = 0;
	int person = sum / n;
	if (sum % n != 0){
		cout << -1 << endl;
		return 0;
	}else{
		for (int i = 0; i < n - 1; i++){
			if (island[i] != person){
				island[i+1] += island[i] - person;
				ans++;
			}
		}
	}
	cout << ans << endl;

	return 0;
}



