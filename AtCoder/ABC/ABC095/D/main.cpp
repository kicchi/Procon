#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
using ll = long long;

ll N, C;
vector<ll> x;
vector<ll> v;
vector<ll> rx;
vector<ll> av;
vector<ll> avx;
vector<ll> rav;
vector<ll> ravx;
vector<ll> maxrx;
vector<ll> maxlx;

int main()
{
    cin >> N >> C;

    x.resize(N);
    v.resize(N);
    rx.resize(N);
    av.resize(N);
    avx.resize(N);
    maxrx.resize(N);
    rav.resize(N);
    ravx.resize(N);
    maxlx.resize(N);

    for (int i = 0; i < N;i++) {
        cin >> x[i] >> v[i];
        av[i] = v[i];
        avx[i] = av[i] - x[i];
        maxrx[i] = av[i] - x[i];
		if (i != 0) {
            av[i] += av[i - 1];
            avx[i] = av[i] - x[i];
            maxrx[i] = max(avx[i], maxrx[i - 1]);
        }
    }

    for (int i = 0; i < N; i++) {
        rx[i] = C - x[N - i - 1];
        rav[i] = v[N - i - 1];
        ravx[i] = rav[i] - rx[i];
        maxlx[i] = rav[i] - rx[i];
        if (i != 0) {
            rav[i] += rav[i - 1];
            ravx[i] = rav[i] - rx[i];
            maxlx[i] = max(ravx[i], maxlx[i - 1]);
        }
    }

    ll ans = 0;

    for (int i = 0; i < N; i++) {
        ans = max(ans, avx[i]);
        if(i != N - 1) {
            ans = max(ans, av[i] - 2 * x[i] + maxlx[N - i - 2]);
        }
    }

    for (int i = 0; i < N; i++) {
        ans = max(ans, ravx[i]);
        if(i != N - 1) {
            ans = max(ans, rav[i] - 2 * rx[i] + maxrx[N - i - 2]);
        }
        //cout << ans << endl;
    }

    cout << ans << endl;

    return 0;
}

	return 0;
}
