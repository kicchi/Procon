#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<algorithm>
#include<stack>
#include<map>
#include<set>
#define INF 2147483647
#define lli long long int

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;

bool check(vector<string> &str1,vector<string> &str2,int x,int y){
	for (int i = y; i < str2.size() + y; i++){
		for (int j = x; j < str2.size() + x; j++){
			if (str1[i][j] != str2[i-y][j-x]){
				return false;
			}
		}
	}
	return true;
	
}


int main() {
	int n,m; cin >> n >> m;
	vector<string> str1(n);
	vector<string> str2(m);
	for (int i = 0; i < n; i++){
		cin >> str1[i];	
	}

	for (int i = 0; i < m ; i++){
		cin >> str2[i];	
	}

	for (int i = 0; i < str1.size() - str2.size() + 1; i++){
		for (int j = 0; j < str1.size() - str2.size() + 1; j++){
			if (check(str1,str2,i,j)){
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}



