// 高橋くんの苦悩
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

// i番目のスクショまででk枚を選び幅jにしたときの重要度の合計の最大値
int dp[55][55][10005];

int main(){
    int w, n, K;
    cin >> w >> n >> K;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i] >> b[i];
    dp[0][0][0] = 0;
    repi(i,1,n+1){
        repi(k,1,min(i,K)+1){
            rep(j,w+1){
                if(j-a[i-1]>=0){
                    dp[i][k][j] = max({dp[i][k][j],dp[i-1][k-1][j-a[i-1]]+b[i-1],dp[i-1][k][j],dp[i][k-1][j]});
                }else{
                    dp[i][k][j] = max(dp[i][k-1][j],dp[i-1][k][j]);
                }
            }
        }
    }
    cout << dp[n][K][w] << el;
    return 0;
}