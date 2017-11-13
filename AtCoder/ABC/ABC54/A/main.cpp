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
	int a,b; cin >> a >> b;
	vi N = {13,1,2,3,4,5,6,7,8,9,10,11,12};
	if (N[a-1] < N[b-1]){
		cout << "Bob" << endl;
	}else if(N[a-1] > N[b-1]){
		cout << "Alice" << endl;
	}else{
		cout << "Draw" << endl;
	}
	return 0;
}



