#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<sstream>
#include<queue>
#include<cmath>
#include<algorithm>
#include<stack>
#include<map>
#include<set>
#include<iomanip>
#define INF 2147483647
#define lli long long int
#define MOD 100000007

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;

void printv(vi v){
	for (int i = 0; i < v.size(); i++){
		if (i != v.size() - 1){
			if (v[i] == 1){
				cout << "S";
			}else if (v[i] == -1){
				cout << "W";
			}
		}else{
			if (v[i] == 1){
				cout << "S" << endl;
			}else if (v[i] == -1){
				cout << "W" << endl;
			}
			
		}
	}
	
}

void _printv(vi v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
		}cout << endl;
		return ;
		}
bool check(vi &hh,string s){
	
	int tmp = hh[0];
	for (int i = 1; i <= s.size()-1; i++){
		if (s[i] == 'o'){
			if (hh[i] == 1){
				hh[(i+1)%s.size()] = hh[i-1];	
				//cout << "o1" << endl;
			}else if(hh[i] == -1){
				hh[(i+1)%s.size()] = (-1) * hh[i-1];
				//cout << "o-1" << endl;
			}
		}else if(s[i] == 'x'){
			if (hh[i] == 1){
				hh[(i+1)%s.size()] = (-1) * hh[i-1];	
				//cout << "x1" << endl;
			}else if(hh[i] == -1){
				hh[(i+1)%s.size()] = hh[i-1];
				//cout << "x-1" << endl;
			}
		}
	}
	//printv(hh);
	//cout << endl;

	if (tmp == hh[0]){
	}else{
		return false;
	}
	if (s[0] == 'o'){
		if (hh[0] == 1){
			if (hh[1] == hh[s.size()-1]){
				//cout << hh[0] << " " << hh[s.size()-2] << endl;
				return true;
			}else{ // !=
				return false;
			}
		}else{ // -1
			if (hh[1] != hh[s.size()-1]){
				//cout << hh[0] << " " << hh[s.size()-2] << endl;
				return true;
			}else{ // ==
				return false;
			}
			
		}
	}else{ // 'x'
		if (hh[s.size()-1] == 1){
			if (hh[1] != hh[s.size()-1]){
				return true;
			}else{ // ==
				return false;
			}
		}else{ // -1
			if (hh[1] == hh[s.size()-1]){
				return true;
			}else{ // !=
				return false;
			}
			
		}
			
	}
	return false;

	
}

int main() {
	int n; cin >> n;
	string s ; cin >> s;
	
	vi hh(n),hw(n),ww(n),wh(n);
	

	hh[0] = 1;
	hh[1] = 1;
	hw[0] = 1;
	hw[1] = -1;
	ww[0] = -1;
	ww[1] = -1;
	wh[0] = -1;
	wh[1] = 1;

	if(check(hh,s)){
		printv(hh);
		return 0;
	}
	if(check(wh,s)){
		printv(wh);
		return 0;
	}
	if(check(hw,s)){
		printv(hw);
		return 0;
	}
	if(check(ww,s)){
		printv(ww);
		return 0;
	}
	cout << -1 << endl;
	
	return 0;
}



