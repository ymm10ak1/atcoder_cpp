// 048 - I will not drop out（★3）
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define repi(i, s, n) for(int i = (int)(s); i < (int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i = (int)(n)-1; i >= (int)(s); --i)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el '\n'
const int INF = 1e9;
const ll LLINF = 1e18;

// NOTE: B, A-Bにして1分単位で考えるというのを見たので自力では解けていない
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i] >> b[i];
    vector<int> c;
    rep(i,n){
        c.push_back(b[i]);
        c.push_back(a[i]-b[i]);
    }
    sort(rall(c));
    ll ans = 0;
    rep(i,k) ans += c[i];
    cout << ans << el;
    return 0;
}
