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


map<char,int> lev;
int calc(char op, int a, int b) {
	if (op == '+') {
		return a + b;
	}else if (op == '-') {
		return a - b;
	}else {
		return a * b;
	}
}

int parse(int l,int r,const string& S) {
	int open_cnt = 0, close_cnt = 0, nxt_l = -1;	
	int num = 0;
	 
	stack<int>  st_val;
	stack<char> st_op;

	rep(i,l,r) {
		if (open_cnt == close_cnt) {
			if (isdigit(S[i])) {
				num = 10 * num + (int)(S[i] - '0');	
			}else if (S[i] == '(') {
				++open_cnt;
				nxt_l = i + 1;
			}else if (S[i] == '$') {
				st_val.push(num);
				num = 0;
			}else {
				char op = S[i];
				while(!st_op.empty() && lev[st_op.top()] >= lev[op]) {
					char pre = st_op.top(); st_op.pop();
					int b = st_val.top(); st_val.pop();
					int a = st_val.top(); st_val.pop();
					st_val.push(calc(pre,a,b));
				}
				st_op.push(op);
			}
		} else {
			if (S[i] == '(') ++open_cnt;
			if (S[i] == ')') {
				++close_cnt;
				if (open_cnt == close_cnt) st_val.push(parse(nxt_l,i,S));
			}
		}
	}
	while(!st_op.empty()) {
		char op = st_op.top(); st_op.pop();
		int b = st_val.top(); st_val.pop();
		int a = st_val.top(); st_val.pop();
		st_val.push(calc(op,a,b));
	}
	return st_val.top();
}
	

signed main() {
	
	string S;
	cin1(S);
	S += '#';

	int m = S.size();
	rep(i,0,m-1) {
		if (isdigit(S[i]) && !isdigit(S[i+1])) {
			S = S.substr(0,i+1) + "$" + S.substr(i+1);
			m = S.size();
		}
	}

	S = S.substr(0,m-1);

	int ans = 1LL << 63;	
	rep(i,0,3) {
		rep(j,0,3) {
			rep(k,0,3) {
				lev['+'] = i;
				lev['-'] = j;
				lev['*'] = k;
				ans = max(ans,parse(0,(int)S.size(),S));
			}
		}
	}

	cout(ans);
	return 0;
}



