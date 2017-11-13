#include<bits/stdc++.h>
#define INF 2000000000
#define int long long int
#define MOD 1000000007
#define pb push_back
#define cin1(n) (cin >> n)
#define cin2(a,b) (cin >> a >> b)
#define cin3(a,b,c) (cin >> a >> b >> c)
#define cout(n) (cout << n << endl)
#define rep(i,a,b) for(int i=(a);i<(b);++i)
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


int point_check(vvi &p) {
	int ret = 0;	
	rep(i,0,p.size()) {
		int old = p[i][0];
		int num = 1;
		vector<bool> kesu(5,false);;
		kesu[0] = true;
		rep(j,1,5) {
			cout(p[i][j]);
			if (p[i][j] == old) {
				//cout << p[i][j] << " " << old << endl;
				num++;	
				//cout(num);
				kesu[j] = true;
			}else {
				old = p[i][j];
				if(num >= 3) continue;

				num = 0;
				kesu[j-1] = false;
				kesu[j] = true;
				if (j >= 2) {
					kesu[j-2] = false;
				}
			}
		}
		if (kesu[3] == false) {
			kesu[4] = false;
		}
		if(num >= 3) {
			//cout << "old = " << old << "num = " << num << endl;
			ret += old * num;
			rep(k,0,5) {
				if(kesu[k]) {
					p[i][k] = 0;
				}
			}
		}
	}
	return ret;
}

void next(vvi &p) {
	rep(i,0,5) {
		for (int j = p.size() - 1; j >= 0; j--) {
			if (p[j][i] == 0) {
				for (int k = j; k >= 0;k--) {
					if (p[k][i] != 0) {
						int tmp = p[j][i];
						p[j][i] = p[k][i];
						p[k][i] = tmp;
						break;
					}
				}
			}
		}
	}				
	return ;	
}

void printv(vvi v){
	for(int i = 0; i < v.size(); i++){
	for(int j = 0; j < 5; j++){
		cout << v[i][j] << " ";
	}cout << endl;
	}cout << endl;
		return ;
		}

signed main() {

	while(1) {
		int ans = 0;
		cin1(n);
		if (n == 0) break;

		vvi puzzle(n,vi(5,0));
		rep(i,0,n) {
			rep(j,0,5) {
				cin1(puzzle[i][j]);	
			}
		}
		
		int old_ans = 0;
		while(1){
			ans += point_check(puzzle);
			cout(point_check(puzzle));
			if (point_check(puzzle)==0) {
				cout("hoge");
			}else {
				cout("sita");
				cout(point_check(puzzle));
			}
			//std::cout << "debug now" << std::endl;	
			//printv(puzzle);
			if(old_ans == ans) break;
			//old_ans = ans;
			//std::cout << "old="<< old_ans << " ans=" << ans <<  std::endl;	
			next(puzzle);
			//printv(puzzle);
		}
	
		cout(ans);
	}
	return 0;
}



