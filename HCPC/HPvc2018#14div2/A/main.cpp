#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	
	int N; cin >> N;
	vector<pair<string, int>> v;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		v.push_back(make_pair(s,-1));
	}

	int M; cin >> M;
	int state = -1;
	for (int i = 0; i < M; i++) {
		string s; cin >> s;
		for (int j = 0; j < v.size(); j++) {
			if (v[j].first == s) {
				state *= -1;
				if (state == 1) {
					cout << "Opened by " << s << endl;
				}else {
					cout << "Closed by " << s << endl;
				}
				break;
			}else if (v[j].first != s and j == v.size() - 1) {
				cout << "Unknown " << s << endl;	
			}
		}
	}

	return 0;
}
