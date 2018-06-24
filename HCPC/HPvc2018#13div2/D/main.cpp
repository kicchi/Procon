#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};

int ans = 0;
int W,H;

bool in_range(int x,int y) {
	if (0 <= x and x < W and 0 <= y and y < H) {
		return true;
	}else {
		return false;
	}
}
int dfs(vector<string> &tab,int x, int y) {
	int ret = 0;
	if (tab[y][x] == '#' or tab[y][x] == '/') return  0;
	if (tab[y][x] == '.') {
		ret += 1;
		tab[y][x] = '/';
	}

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (in_range(nx,ny)) {
			ret += dfs(tab,nx,ny);	
		}
	}
	return ret;
}

void printv(vector<string> v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
}

int main() {
	
	while(1) {
		cin >> W >> H;
		if (W + H == 0) break;
		int x,y;
		vector<string> tab;
		for (int i = 0; i < H; i++) {
			string s; cin >> s;
			tab.push_back(s);
		}
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				if (tab[i][j] == '@') {
					x = j;
					y = i;
				}
			}
		}
		//printv(tab);
		cout << dfs(tab,x,y) + 1 << endl;
		//printv(tab);
	}

	return 0;
}
