#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	int N; cin >> N;
	vector<pair<double, int>> a(N); //first : gpa, second : id
	map<double,int> m;
	vector<int> points;

	for (int i = 0; i < N; i++) {
		double A; cin >> A;
		a[i] = make_pair(A,i);
		m[A]++;
		//cout << m[A] << endl;
	}

	sort(a.begin(), a.end());

	vector<int> num(N,0);
	for (int i = 1; i < N; i++) {
		if (a[i].first - a[i-1].first < 0.00001) {
			num[i] = num[i-1];
		}else {
			num[i] = num[i-1] + m[a[i-1].first];
		}
	}

	vector<pair<int,int>> ans(N);// first : id , second : point

	for (int i = 0; i < N; i++) {
		int p = (num[i] * 3) + m[a[i].first] - 1;
		ans[i] = make_pair(a[i].second, p);
	}

	sort(ans.begin(), ans.end());

	for (int i = 0; i < N; i++) {
		cout << ans[i].second << endl;
	}
	return 0;
}
