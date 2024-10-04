// C - Many Replacement
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
    int n, q;
    string s;
    cin >> n >> s >> q;
    vector<char> alp(26);
    rep(i,26) alp[i] = 'a'+i;
    rep(i,q){
        char c, d; cin >> c >> d;
        rep(j,26) if(alp[j] == c) alp[j] = d;
    }
    rep(i,s.size()){
        if(i < (int)s.size()-1) cout << alp[s[i]-97];
        else cout << alp[s[i]-97] << el;
    }
    return 0;
}