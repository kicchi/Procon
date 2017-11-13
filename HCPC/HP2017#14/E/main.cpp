#include<bits/stdc++.h>
#define INF 2147483647
#define lli long long int
#define MOD 1000000007
#define pb push_back

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;

int larger(int a, int b, vi ara) {

	for (int i = 9; i >= 0; i--) {
		int idx = pow(10,i);	
		int num_a = (a / idx) % 10;
		int num_b = (b / idx) % 10;
		//cout << num_a << " " << num_b << endl;
		if (num_a == num_b) {
			continue;
		}

		for (int j = 0; j < 10; j++) {
			if (ara[j] == num_a) {
				return b;
			}else if(ara[j] == num_b){
				return a;
			}
		}
	}
}

void printv(vi v){
	for(int i = v.size()-1; i >= 0; i--){
		cout << v[i] <<endl; 
		}
		return ;
		}
int main() {

	vi ara(10,0);	

	for (int i = 0; i < 10; i ++) {
		cin >> ara[i];
	}

	int n; cin >> n;

	vi a(n,0);
	for (int i = 0; i < n; i ++) {
		cin >> a[i];	
	}

	//cout << larger(10003,10002,ara) << endl;

	for (int i = 0; i < n; i++) {
		int max = 0;
		int maxj = i;
		for (int j = i; j < n; j++) {
			if(larger(max,a[j],ara) == a[j]) {
				max = a[j];
				maxj = j;
			}
		}

		int tmp = a[i];
		a[i] = a[maxj];
		a[maxj] = tmp;
	}

	printv(a);

	return 0;
}



