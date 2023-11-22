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
    int n;
    string s, t;
    cin >> n >> s >> t;
    int cnt = 0;
    rep(i, n){
        if(s[i] == t[i]) ++cnt;
        if(s[i]=='1' && t[i]=='l') ++cnt;
        if(s[i]=='0' && t[i]=='o') ++cnt;
        if(t[i]=='1' && s[i]=='l') ++cnt;
        if(t[i]=='0' && s[i]=='o') ++cnt;
    }
    if(cnt == n) cout << "Yes" << el;
    else cout << "No" << el;
    return 0;
}