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
    int l, r;
    string s;
    cin >> l >> r >> s;
    l--; r--;
    string t = s.substr(l, r-l+1);
    reverse(all(t));
    rep(i, l) cout << s[i];
    cout << t;
    repi(i, r+1, s.size()) cout << s[i];
    cout << el;
    return 0;
}