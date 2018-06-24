#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
	string s; cin >> s;

	int l = s.size();
	
	vector<pair<string, string>> ss;

	//ABC AC
	for (int i = 1; i < l; i++) {
		if(s[0] == s[i] and s[l-1] == s[i-1]) { 
			ss.push_back(make_pair(s.substr(0,i), s.substr(i,l-i)));	
			//cout <<  s.substr(0,i) << " " <<  s.substr(i,l-i) << endl;
		}
	}

	int ans = 0;
	for (int i = 0; i < ss.size(); i++) {
		string ABC = ss[i].first;
		string AC = ss[i].second;
		int l = AC.size();
		for (int j = 1; j < l; j++) {
			if ((int)ABC.size() <= 1 or (int)AC.size() <= 1 or 
				(int)ABC.size() <= (int)AC.size()) {
				continue;
			}
			string A = AC.substr(0,j);
			string C = AC.substr(j,l-j);
			if (A == "" or C == "") {
				continue;
			}
			if ((int)ABC.size() - (int)C.size() <= 0) {
				continue;
			}
			if (ABC.substr(0,A.size()) == A and 
				ABC.substr(ABC.size() - C.size(),C.size()) == C
				){
				ans++;
				//cout << "A = " << A << " C = " << C <<  endl;
			}
		}
	}
	cout << ans << endl;
	

	return 0;
}
