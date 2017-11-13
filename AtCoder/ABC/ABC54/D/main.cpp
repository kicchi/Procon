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

int gcd(int a,int b){
	if (a == 0 and b == 0) return 1;
	if (b == 0) return a;
	return gcd(b,a%b);
}

int dfs(vi &a,vi &b,vi &c,int i,int cost,int ma,int mb,int a_sum,int b_sum){

	if (i == a.size() and a_sum / gcd(a_sum,b_sum) == ma and b_sum / gcd(a_sum,b_sum) == mb){
		return cost;
	}else if(i == a.size()){
		return INF;
	}
	return min(dfs(a,b,c,i+1,cost+c[i],ma,mb,a_sum+a[i],b_sum+b[i]),dfs(a,b,c,i+1,cost,ma,mb,a_sum,b_sum));
}

int main() {
	int n,ma,mb; cin >> n >> ma >> mb;
	vi a(n);
	vi b(n);
	vi c(n);

	for (int i = 0; i < n; i++){
		cin >> a[i] >> b[i] >> c[i];
	}
	
	int ans = dfs(a,b,c,0,0,ma,mb,0,0);

	if (ans == INF){
		cout << -1 << endl;
	}else{
		cout << ans << endl;
	}
	
	

	return 0;
}



