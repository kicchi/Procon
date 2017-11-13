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
int main() {
	lli x; cin >> x;
	lli amari = x % 11;
	lli syo = x / 11;
	if (amari <= 6 and amari != 0){
		cout << syo *2+ 1 << endl;
	}else if(amari == 0){
		cout << syo * 2 << endl;
	}else{
		cout << syo *2+ 2 << endl;
	}
	return 0;
}



