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
#include<iomanip>
#define INF 2147483647
#define lli long long int

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;

vvi city(300,vi(300,INF));
int MIN = INF;
bool check(vi visited){
	for (int i = 0; i < visited.size(); i++){
		if (visited[i] != 1){
			return false;
		}
	}
	return true;
}
void printv(vi v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
		}cout << endl;
		return ;
		}

void dfs(int v,int ret,vi visited){
	printv(visited);
	if(check(visited)){
		cout << ret << endl;
		if (city[v][0] != 0){
			ret += city[v][0];
		}else{
			ret = INF;
		}
		if (MIN > ret){
			MIN = ret;
		}
	}
	for (int i = 0; i < city.size(); i++){
		if (city[v][i] != INF and visited[i] == 0){
			visited[i] = 1;
			dfs(i,ret+city[v][i],visited);
			visited[i] = 0;
		}
	}
}

int main() {
	int n,m; cin >> n >> m;
	vi visited(n,0);

	for (int i = 0; i < m; i++){
		int u,v,l;
		cin >> u >> v >> l;
		city[u-1][v-1] = l;
		city[v-1][u-1] = l;
	}
	visited[0] = 1;
	dfs(0,0,visited);
	cout << MIN << endl;

	return 0;
}



