// 
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
    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);
    map<string, bool> mp;
    rep(i, n) cin >> s[i];
    rep(i, m){
        cin >> t[i];
        mp[t[i]] = true;
    }
    rep(i, n){
        if(mp[s[i]]) cout << "Yes" << el;
        else cout << "No" << el;
    }
    return 0;
}