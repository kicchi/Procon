#include<iostream>
#include<vector>
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
void printv(vi v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
		}cout << endl;
		return ;
		}
int main() {
	int n; cin >> n;
	vi a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	
	int cnt = 0;
	int old_a = a[0];
	int ans = 0;
	int dcnt = 0;
	for (int i = 0; i < a.size(); i++){
			cout << a[i] << " " << old_a << endl;
		if (a[i] == old_a){
			cnt++;
			cout << cnt << endl;
		}
		if (old_a != a[i]){
			if (cnt % 2 == 0 and cnt != 0){
				ans += cnt - 1;
				dcnt++;
			}else if(cnt % 2 == 1 and cnt !=1){
				ans += cnt;
			}
			cnt = 1;
		}
		old_a = a[i];
	}

	cout << ans<< endl;
	return 0;
}



