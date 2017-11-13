#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
	int n; cin >> n ;
	long long int a,b; cin >> a >> b;
	vector<long long int> x(n);
	for (int i = 0; i < n; i++){
		cin >> x[i];
	}

	long long int hiro = 0;
	for (int i = 0; i < n - 1; i++){
		hiro += min((x[i+1] - x[i]) * a,b);
	}
	cout << hiro << endl;
return 0;
}
