#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


void printv(vector<vector<int>> v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v.size(); j++) {
			cout << v[i][j];
			if (j != v.size()-1) {
				cout << " ";
			}
		}
		cout << endl;
	}
	
}


void rot(vector<vector<int>> &mat, int r,int c, int s,int a) {
	vector<vector<int>> tmp(s,vector<int>(s,0));
	vector<vector<int>> sub(s,vector<int>(s,0));
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			tmp[i][j] = mat[r-1+i][c-1+j];
		}
	}
	int time = a / 90;
	for (int k = 0; k < time; k++) {
		for (int i = 0; i < s; i++) {
			for (int j = 0; j < s; j++) {
				sub[i][j] = tmp[s-1-j][i];
			}
		}
		tmp = sub;
	}
	/*
	cout << "tmp" << endl;
	printv(tmp);
	cout << "sub" << endl;
	printv(sub);
	*/
}

void rev(vector<vector<int>> &m, int r, int c, int s) {
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			int num = m[r-1+i][c-1+j];
			if (num == 1) {
				m[r-1+i][c-1+j] = 0;
			}else if (num == 0) {
				m[r-1+i][c-1+j] = 1;
			}
		}
	}
	/*
	cout << "mat" << endl;
	printv(m);
	*/
	
}

void left_shift(vector<vector<int>> &m, int r) {
	vector<int> tmp(m.size(),0);
	for (int i = 0; i < m.size(); i++) {
		tmp[i] = m[r-1][i];
	}
	for (int i = 0; i < m.size(); i++) {
		m[r-1][i] =  tmp[(i+1)%tmp.size()];
	}
	/*
	cout << "mat" << endl;
	printv(m);
	*/
}

void right_shift(vector<vector<int>> &m, int r) {
	vector<int> tmp(m.size(),0);
	for (int i = 0; i < m.size(); i++) {
		tmp[i] = m[r-1][i];
	}
	for (int i = 0; i < m.size(); i++) {
		m[r-1][i] =  tmp[(i-1+tmp.size())%tmp.size()];
	}
	/*
	cout << "mat" << endl;
	printv(m);
	*/
}

void island_rev(vector<vector<int>> &m, int r, int c,int n) {
	if (!(0 <= r-1 and r-1 < m.size() and 0 <= c-1 and c-1 < m.size())) return ;
	//cout << "r = " << r << " c = " << c  << endl;
	if (n != m[r-1][c-1]) return;	
	//cout << "hoge" << endl;

	if (m[r-1][c-1] == 1) {
		m[r-1][c-1] = 0;
	}else {
		m[r-1][c-1] = 1;
	}
	//printv(m);
	for (int i = 0; i < 4; i++) {
		int nx = c + dx[i];			
		int ny = r + dy[i];
		if (0 <= nx and nx <= m.size() and 0 <= ny and ny <= m.size()) {
			//cout << nx << " " << ny  << endl;
			island_rev(m,ny,nx,n);
		}
	}
	return ;
}

int main() {
	int n,m; cin >> n >> m;

	vector<vector<int>> mat(n,vector<int>(n,0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mat[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		int q; cin >> q;
		if (q == 0) {
			int r,c,size,angle; cin >> r >> c >> size >> angle;
			rot(mat,r,c,size,angle);
		}else if (q == 1) {
			int r,c,size; cin >> r >> c >> size;
			rev(mat,r,c,size);
		}else if (q == 2) {
			int r; cin >> r;
			left_shift(mat,r);
		}else if (q == 3) {
			int r; cin >> r;
			right_shift(mat,r);
		}else if (q == 4) {
			int r,c; cin >> r >> c;
			int n = mat[r-1][c-1];
			island_rev(mat,r,c,n);
		}
	}

	
	printv(mat);

	return 0;
}
