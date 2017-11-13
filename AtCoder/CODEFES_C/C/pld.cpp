#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {

	string str; cin >> str;
	string tmp = str;
	reverse(str.begin(),str.end());
	string rev = str;
	str = tmp;

	int ans = 0;
	int cnt = 0;
	int left = 0;
	int right = str.size() - 1;
	while(str != rev) {
		if (cnt == 1 + (str.size() / 2)) {
			break;
		}
		if (str[left] != str[right] and str[left] != 'x' and str[right] == 'x') {
			string L = str.substr(0,left);
			//cout << "UE" << endl;
			//cout << "L = " <<  L  << endl;
			string R = str.substr(left,str.size() - left);
			//cout << "R = " <<  R  << endl;
			str = L + "x" + R;
			//cout << "str = " << str << endl;
			ans++;
			left++;
		}else if (str[left] != str[right] and str[right] != 'x' and str[left] == 'x') {
			//cout << "SITA" << endl;
			string L = str.substr(0,right+1);
			//cout << "L = " <<  L  << endl;
			string R = str.substr(right+1,str.size() - 1);
			//cout << "R = " <<  R  << endl;
			str = L + "x" + R;
			//cout << "str = " << str << endl;
			ans++;
			left++;
		}else if (str[left] == str[right] ) {
			left++;
			right--;
		}else {
			cout << -1 << endl;
			return 0;
		}
		cnt++;
		tmp = str;
		reverse(str.begin(),str.end());
		rev = str;
		str = tmp;
		
	}
	if (str != rev) {
		cout << -1 << endl;
	}else {
		cout << ans << endl;
	}
	
	return 0;
}
