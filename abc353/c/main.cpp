// C - Sigma Proble
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define repi(i, s, n) for(int i = (int)(s); i < (int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i = n-1; i >= s; --i)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el '\n'
const int INF = 1e9;
const ll LLINF = 1e18;

const int MOD = 100000000;

// 解説見ると累積和は使ってない 解説放送をあとでみる
int main(){
    int n; cin >> n;
    vector<int> a(n);
    vector<ll> b(n+1,0);
    rep(i,n){
        cin >> a[i];
        b[i+1] = b[i]+a[i];
    }
    ll ans = 0;
    repi(i,1,n){
        ans = ans + (i*b[i+1]-(i-1)*b[i])%MOD;
    }
    cout << ans << el;
    return 0;
}