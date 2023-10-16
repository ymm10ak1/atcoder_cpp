// C - Cat Snuke and a Voyage
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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    rep(i, m){
        int a, b;
        cin >> a >> b;
        g[a-1].push_back(b);
        g[b-1].push_back(a);
    }
    rep(i, g[0].size()){
        int v = g[0][i];
        rep(j, g[v-1].size()){
            if(g[v-1][j] == n){
                cout << "POSSIBLE" << el;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << el;
    return 0;
}