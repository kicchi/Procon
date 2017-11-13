#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<sstream>
#include<queue>
#include<deque>
#include<cmath>
#include<algorithm>
#include<stack>
#include<map>
#include<set>
#include<iomanip>
#define INF 2147483647
#define lli long long int
#define MOD 1000000007

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;

void printv(vi v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
		}cout << endl;
		return ;
		}

bool check(vi x){
	for (int i = 0; i < x.size(); i++){
		if (x[i] != 0) return false;
	}
	return true;
}

bool locate(vi x, int xi,int index){
	//cout << x.size() << endl;
	for (int i = 0; i < x.size(); i++){
		if (x[i] == xi){
			if (index != i){
				return false;
			}
		}
	}
	return true;
}

int dfs(vi x,int ans){
	if (check(x)){
		cout << 1 << endl;
		return 1;
	}

	printv(x);
	for (int i = 0; i < x.size(); i++){
		x[i] -= 1;
		if (locate(x,x[i],i) and x[i] >= 0){
			ans += dfs(x,ans);
		}
		x[i] += 1;
		x[i] -= 2;
		if (locate(x,x[i],i) and x[i] >= 0){
			ans += dfs(x,ans);
		}
		x[i] += 2;
	}

	return ans;

}

int main() {
	int n; cin >> n;
	vi x(n);
	for (int i = 0; i < n; i++){
		cin >> x[i];
	}

	cout << dfs(x,0) << endl;

	

	return 0;
}



