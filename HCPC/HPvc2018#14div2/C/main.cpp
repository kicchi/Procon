#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


bool isMSprime(int num, vector<int>  MS_list) {
    for (int i = 0; i < MS_list.size(); i++) {
        if (num % MS_list[i] == 0 and num != MS_list[i]) {
            return false;
        }
    }
    return true;
}

int main() {
	vector<int> MS_list;
	
	for (int i = 2; i <= 299998; i++) {
		if (i % 7 == 6 or i % 7 == 1) {
			MS_list.push_back(i);	
		}
	}
	int l = MS_list.size();

	while(1) {
		int n; cin >> n;
		if (n == 1) break;

		vector<int> MS;

		for (int i = 0; i < l; i++) {
			if (n % MS_list[i] == 0 and isMSprime(MS_list[i],MS_list)) {
				MS.push_back(MS_list[i]);
			}
		}
		cout << n << ":";
		for (int i = 0; i < MS.size(); i++) {
			cout << " " << MS[i] ;
		}
		cout << endl;
	}

	return 0;
}
