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

int main() {
	int n; cin >> n;
	vector<string> vv(n);
	vi start(n);

	int max = 0;
	int maxi = 0;
	for (int i = 0; i < n; i++){
		cin >> vv[i];
		for (int j = 0; j < n; j++){
			if (vv[i][j] == '#'){
				start[i]++;
			}
		}

		if (max < start[i]){
			max = start[i];
			maxi = i;
		}
	}
	if (max == 0){
		cout << -1 << endl;
		return 0;
	}
	int ans = 0;	
	ans += n - max; //1
	ans++;
	
	string tmp;
	if (maxi == 0){
		tmp = vv[1];
		vv[1] = vv[maxi];
	}else{
		tmp = vv[0];
		vv[0] = vv[maxi];
	}

	for (int i = 0; i < n; i++){ //2
		if (vv[i][maxi] == '#'){
			ans--;
			if (max == 0){
				vv[1] = tmp;
			}else{
				vv[0] = tmp;
			}
			break;
		}
	}

	for (int i = 0; i < n; i++){
		if (vv[maxi][i] == '.'){
			for (int j = 0; j < n; j++){
				vv[j][i] = vv[maxi][j];		
			}
		}
	}

	int all_black = 0;
	for (int j = 0 ; j < n; j++){
		bool flag = true;
		for (int i = 0; i < n; i++){
			if (vv[i][j] == '.'){
			cout << i << endl;	
				flag = false;
				break;
			}
		}

		if (flag){
			
			all_black++;
		}
	}
	ans += n - all_black;
	cout << ans << endl;
	

	return 0;
}



