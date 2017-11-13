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

void printv(vi v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
		}cout << endl;
		return ;
		}
int main() {

	int n; cin >> n;

	if (n > 8) return 0;
	vector<pair<int,int>> coin(n,make_pair(0,0));
	for (int i = 0; i < n; i++) {
		cin >> coin[i].second;
		coin[i].first = i;
	}
	
	double ans = 0;
	double sum = 0;
	do {
		sum++;
		vi uo(n,1);
		for (int i = 0; i < coin.size(); i++) {
			for (int j = i+1; j < coin.size(); j++) {
				//cout << coin[j] << " " << coin[i] << endl;
				if (coin[j].second % coin[i].second == 0) {
					uo[j] *= -1;
				}
			}
		}

		for (int i = 0; i < coin.size(); i++) {
			if (uo[i] == 1) {
				ans++;
			}
		}
	}while(next_permutation(coin.begin(), coin.end()));

	//cout << ans << " " << sum << endl;	
	//ans /= sum;
	double ret = (double)(ans / sum);
	cout << setprecision(10) << ret << endl;
	//printf("%.10lf\n",ans/sum);
	return 0;
}



