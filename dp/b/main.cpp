// B - Frog2
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

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    rep(i, n) cin >> h[i];
    vector<ll> dp(n, LLINF);
    dp[0] = 0;
    repi(i, 1, n){
        repi(j, 1, k+1){
            if(i-j >= 0) dp[i] = min(dp[i], dp[i-j]+abs(h[i]-h[i-j]));
        }
    }
    cout << dp[n-1] << el;
    return 0;
}