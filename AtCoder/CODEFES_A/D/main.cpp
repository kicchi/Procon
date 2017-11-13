#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,0,-1,0};
vector<int>  dy = {0,1,0,-1};

int h,w;

bool inRange(int y,int x) {
	if (y < 0 or h <= y or x < 0 or w <= x) {
		return false;
	}
	return true;
}

void coloring(vector<vector<int>> &c,int x, int y,int d) {
	
	vector<bool> color(4,true);
	vector<int> xx = {1,1,-1,-1};
	vector<int> yy = {1,-1,-1,1};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= d; j++) {
			if (inRange(y+(j*yy[i]),x+((d-j)*xx[i]))) {
				int ad = c[y+(j*yy[i])][x+((d-j)*xx[i])];
				if (ad != 0) {
					color[ad-1] = false;
				}
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		if (color[i]) {
			c[y][x] = i+1;
			return ;
		}
	}
}

int main() {
	int d; cin >> h >> w >> d;

	vector<vector<int>> c(h,vector<int>(w,0));
	
	c[0][0] = 1;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			coloring(c,j,i,d);	
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (c[i][j] == 1) {
				cout << 'R';
			}else if(c[i][j] == 2) {
				cout << 'Y';
			}else if (c[i][j] == 3) {
				cout << 'G';
			}else if (c[i][j] == 4) {
				cout << 'B';
			}else {
				cout << '.';
			}
		}
		cout << endl;
	}



	return 0;
}
