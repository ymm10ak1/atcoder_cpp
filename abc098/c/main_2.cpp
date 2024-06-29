// C - Attention
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
    int n;
    string s;
    cin >> n >> s;
    int e = 0;
    rep(i,n) if(s[i] == 'E') e++;
    int w = 0, ans = INF;
    rep(i,n){
        if(s[i]=='E' && e>0) e--;
        if(i>0 && s[i-1]=='W') w++;
        ans = min(ans,e+w);
    }
    cout << ans << el;
    return 0;
}
