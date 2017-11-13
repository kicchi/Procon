#include<bits/stdc++.h>
#define INF 2000000000
#define int long long int
#define MOD 1000000007
#define pb push_back
#define cin1(n) (cin >> n)
#define cin2(a,b) (cin >> a >> b)
#define cin3(a,b,c) (cin >> a >> b >> c)
#define cout(n) (cout << n << endl)
#define for_(i,a,b) for(int i=(a);i<(b);++i)
#define fr first 
#define sc second 
#define EPS (1e-10)

using namespace std;

typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef vector<pair<int,int>> vpii;
typedef vector<string> vs;
typedef vector<vector<string>> vss;
typedef pair<int,int> pii;
typedef complex<double> Point;

double dot(Point a,Point b) {
	return a.real()*b.real() + a.imag()*b.imag();
}
double cross(Point a,Point b) {
	return a.real()*b.imag() - a.imag()*b.real();
}

int ccw(Point a,Point b,Point c) {
	if (cross(b-a,c-a) > EPS) return 1;
	if (cross(b-a,c-a) < -EPS) return -1;
	if (dot(b-a,c-a) < -EPS) return 2;
	if (abs(b-a)+EPS < abs(c-a)) return -2;
	return 0;
}

bool org_in(Point a,Point b,Point c) {
	Point org = Point(0,0);	
	if (ccw(a,b,org) and ccw(b,c,org) and ccw(c,a,org)){
		return true;
	}
	return false;
}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int n,m;
int a,b;
int p,q;


signed main() {
	
	cin1(n);

	vector<Point>  ten;
	for_(i,0,n) {
		ten.pb(Point(a,b));
		cout(ten[i].real());
	}

	double min = INF;
	for_(i,0,n) {
		for_(j,i,n) {
			for_(k,j,n) {
				double s = (cross(ten[j] - ten[i],ten[k] - ten[i]))/2;
				if (org_in(ten[i],ten[j],ten[k]) and min > s) {
					min = s;
				}
			}
		}
	}
	if (min == INF) {
		cout("Impossible");
	}else {
		cout("Possible");
		cout(min);
	}

	return 0;
}



