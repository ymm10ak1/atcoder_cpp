// C - Extra Character
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
    string s,t;
    cin >> s >> t;
    rep(i,s.size()){
        if(s[i] != t[i]){
            cout << i+1 << el;
            return 0;
        }
    }
    cout << t.size() << el;
    return 0;
}
