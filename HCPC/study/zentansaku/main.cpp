#include<iostream>
#include<vector>
#include<string>
#include<queue>
#define INF 2140000000
#define MAX_N 100
#define MAX_M 100

using namespace std;

int n,m;
vector<string> maze;

//方向ベクトル
vector<int> dx = {1,0,-1,0};	
vector<int> dy = {0,1,0,-1};	

int sx,sy;
int gx,gy;

vector< vector<int> > d(MAX_N,(vector<int>(MAX_M,INF)));

int bfs(void){
	queue<pair<int,int>> q;
	q.push(make_pair(sx,sy)); //一個目をキューにpush

	d[sy][sx] = 0; //スタート地点の距離を０

	while(!q.empty()) { //キューが空になるまで。
		pair<int,int> p = q.front();
		q.pop(); //先頭をpopする。

		if (p.first == gx and p.second == gy) {
			break;
		}

		for (int i = 0; i < 4; i++) {
			int nx = p.first + dx[i];
			int ny = p.second + dy[i];

			if (/*1*/0 <= nx and nx < n and 0 <= ny and ny < m and /*2*/maze[ny][nx] != '#' and /*3*/d[ny][nx] == INF) { //1.迷路の範囲外じゃない、2.壁じゃない、3.一度も訪れたことがない
				q.push(make_pair(nx,ny)); //遷移できる状態をキューにpushする
				d[ny][nx] = d[p.second][p.first] + 1; 
			}

		}
	}
	return d[gy][gx];
}
	
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		string str; cin >> str;
		maze.push_back(str);;
		for (int j = 0; j < m; j++){
			if (maze[i][j] == 'S'){
				sy = i; sx = j;
			}
			if (maze[i][j] == 'G'){
				gy = i; gx = j;
			}
		}
	}

	int ans = bfs();
	cout << ans << endl;
	return 0;
}



