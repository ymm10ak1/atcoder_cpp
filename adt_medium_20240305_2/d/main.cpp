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
    string s; cin >> s;
    int ans = 0;
    rep(i,s.size()){
        rep(j,s.size()-i){
            string ns = s.substr(j,i+1);
            string t = ns;
            reverse(all(t));
            if(ns == t) ans = max(ans, i+1);
        }
    }
    cout << ans << el;
    return 0;
}