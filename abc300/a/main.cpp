// 
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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> c(n);
    rep(i,n) cin >> c[i];
    rep(i,n){
        if(a+b == c[i]){
            cout << i+1 << el;
            return 0;
        }
    }
    return 0;
}
