// C - Good Sequence
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define repi(i, s, n) for(int i=(int)(s); i<(int)(n); ++i)
#define rep(i, n) repi(i, 0, n)
#define rrepi(i, n, s) for(int i=n-1; i>=s; --i)
#define repli(i, s, n) for(ll i=(s); i<(ll)(n); ++i)
#define repl(i, n) repli(i, 0LL, n)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el '\n'
const int INF = 1e9;
const ll LINF = 1e18;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    rep(i, n){
        cin >> a[i];
        mp[a[i]]++;
    } 
    int ans = 0;
    for(auto p : mp){
        if(p.second < p.first) ans += p.second;
        else if(p.second > p.first) ans += abs(p.first-p.second);
    }
    printf("%d\n", ans);
    return 0;
}