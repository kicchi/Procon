#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

void era(vector<int> &v){
	v[1] = 1;
	for (int i = 2; i <= 1000; i++){
		if (v[i] == 0){
			for (int j = 2; j <= 1000/i; j++){
			v[i*j] = 1;
			}	
		}
	}
	return ;
}
int main(){
	int n; cin >> n;
	vector<int> yakusu(1001,0);
	vector<int> prime(1001);
	era(prime);
	for (int i = 1; i <= n; i++){
		int p=1;
		if (prime[i] == 0){
			while ( n / pow(i, p) >= 1){
				yakusu[i] += n / (int)pow(i,p);
				p++;
			}	
		}
	}
	long long int ans = 1;
	for (int i= 2; i <= n; i++){
		ans *= yakusu[i] + 1;
		ans = ans % 1000000007;
	}
	cout << ans % 1000000007 << endl;
return 0;
}
