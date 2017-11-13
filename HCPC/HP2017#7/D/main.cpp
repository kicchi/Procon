#include<bits/stdc++.h>
#define INF 2000000000
#define int long long int
#define MOD 1000000007
#define pb push_back
#define cin1(n) (cin >> n)
#define cin2(a,b) (cin >> a >> b)
#define cin3(a,b,c) (cin >> a >> b >> c)
#define cout(n) (cout << n << endl)
#define for_(i,a,b) for(int i=(a);i<(b);++i)
#define fr first 
#define sc second 
#define EPS (1e-10)




using namespace std;

typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef vector<pair<int,int>> vpii;
typedef vector<string> vs;
typedef vector<vector<string>> vss;
typedef pair<int,int> pii;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int n,m;
int a,b;
int p,q;
void printv(vector<string> v){
	for(int i = 0; i < v.size(); i++){
		for_(j,0,v.front().size()) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	return ;
}
signed main() {
	int r,c; cin2(r,c);

	pii s; cin2(s.sc,s.fr);
	pii g; cin2(g.sc,g.fr);

	vector<string> maze(r);

	for_(i,0,r) {
		string str; cin1(maze[i]);
	}


	queue<pair<pii,int>> q;
	q.push(make_pair(s,0));
	maze[s.sc-1][s.fr-1] = '#';

	while(!q.empty()) {
		pair<pii,int> now = q.front();	
		q.pop();
		
		for_(i,0,4) {
			int nx = now.fr.fr + dx[i];
			int ny = now.fr.sc + dy[i];
			int cost = now.sc;

			if (nx == g.fr and ny == g.sc) {
				cout(cost+1);
				return 0;
			}else if (maze[ny-1][nx-1] == '.') {
				maze[ny-1][nx-1] = '#';
				q.push(make_pair(make_pair(nx,ny),cost+1));
			}
		}

	}

	return 0;
}



