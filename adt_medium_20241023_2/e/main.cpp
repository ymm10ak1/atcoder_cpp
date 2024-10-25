// E
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
    string s, t;
    cin >> s >> t;
    int len = 0;
    rep(i,s.size()){
        if(len<3 && s[i]==tolower(t[len])) len++;
    }
    bool ok = false;
    if(t[2]=='X' && len==2) ok = true;
    if(len == 3) ok = true;
    if(ok) cout << "Yes" << el;
    else cout << "No" << el;
    return 0;
}
