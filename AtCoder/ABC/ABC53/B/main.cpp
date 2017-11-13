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
	string str; cin >> str;
	int left =0;
	int right = 0;;
	for (int i = 0;i < str.size(); i++){
		if ( str[i] == 'Z'){
			right = i;
		}
	}
	for (int i = str.size() - 1;i != -1; i--){
		if ( str[i] == 'A'){
			left = i;
		}
	}

	cout << right - left + 1 << endl;
	return 0;
}



