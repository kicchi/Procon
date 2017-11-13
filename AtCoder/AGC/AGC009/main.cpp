#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
int main(){
	int n; cin >> n;
	vector<long> A(n);
	vector<long> B(n);
	for (int i = 0; i < n; i++){
		cin >> A[i] >> B[i];	
	}
	long ans = 0;
	long tmp = 0;
	for (int i = n-1; i >= 0; i--){
		A[i] += ans;
		tmp = B[i] -  (A[i] % B[i]);
		ans += tmp; 
		//for (int j = 0; j <= i; j++){
		//	A[j] += tmp;
		//}
		if (A[i] % B[i] == 0) ans -= B[i];

	}

	cout << ans << endl;

	
return 0;
}
