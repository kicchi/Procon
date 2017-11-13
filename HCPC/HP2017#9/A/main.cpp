#include<bits/stdc++.h>
#include<vector>
#define INF 2147483647
#define lli long long int
#define MOD 1000000007
#define pb push_back

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;

bool check(vector<string> A, vector<string> B){
	bool flag = true;
	for (int i = 0; i < A.size() - B.size(); i++) {
		for (int j = 0; j < A.size() - B.size(); j++) {
			flag = true;
			for (int k = 0; k < B.size(); k++) {
				for (int  l = 0; l < B.size(); l++) {
					if(A[i+l][j+k] != B[k][l]) {
						flag = false;
					}
				}
			}
			if (flag) break;
		}
		if (flag) break;
	}

	return flag;
}

int main() {
	int n,m; cin >> n >> m;

	vector<string> imgA(n);
	vector<string> imgB(m);
	for (int i = 0; i < n; i++) {
		cin >> imgA[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> imgB[i];
	}

	if (check(imgA,imgB)) {
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}



