#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};



int A;
vector<long> a(1000010);
int B;
vector<long> b(1000010);
map<long,int> mpa,mpb;


int main() {
	
	cin >> A;
	for (int i = 0; i < A; i++) {
		cin >> a[i];
	}
	cin >> B;
	for (int i = 0; i < B; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < A; i++) {
		mpa[a[i]]++;
	}
	for (int i = 0; i < B; i++) {
		mpb[b[i]]++;
	}

	for (int i = 0; i < B; i++) {
		int x = b[i];
		if (mpb[x] > mpa[x]) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;

	
	return 0;
}
