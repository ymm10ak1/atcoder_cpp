// C - previous Permutation
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
    int n; cin >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    int cnt = 0;
    // NOTE: do whileを使わずprev_permutation()だけ使えばよい
    do{
        if(cnt++ == 1){
            rep(i,n) printf("%d%c", p[i], i==n-1?'\n':' ');
            return 0;
        }
    }while(prev_permutation(all(p)));
    return 0;
}
