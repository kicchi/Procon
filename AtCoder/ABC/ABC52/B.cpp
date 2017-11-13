#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
	int n; cin >> n;
	string s; cin >> s;
	int max = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++){
		if (s[i] == 'I'){
			cnt++;
		}else{
			cnt--;
		}
		if (max < cnt) max = cnt;
	}
	cout << max << endl;
return 0;
}
