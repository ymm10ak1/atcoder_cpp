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

bool seen[100];

void dfs(const vector<vector<int>>& g, int v){
    seen[v] = true;
    for(int next_v : g[v]){
        if(seen[next_v]) continue;
        dfs(g, next_v);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    rep(i,m){
        int u, v; cin >> u >> v;
        --u; --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int ans = 0;
    rep(i,n){
        if(!seen[i]){
            dfs(g, i);
            ++ans;
        }
    }
    cout << ans << el;
    return 0;
}