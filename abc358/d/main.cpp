// D - Souvenirs
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

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    map<int,int> mp;
    rep(i,n) mp[a[i]]++;
    sort(all(b));
    ll ans = 0;
    rep(i,m){
        auto p = mp.lower_bound(b[i]);
        if(p == mp.end()){
            cout << -1 << el;
            return 0;
        }
        ans += p->first;
        mp[p->first]--;
        if(p->second == 0) mp.erase(p);
    }
    cout << ans << el;
    return 0;
}
