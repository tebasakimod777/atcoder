// https://atcoder.jp/contests/dp/tasks/dp_b
#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
#define FOR(i,a,b)  for(int i=(a);i<(b);++i)
#define rep(i,n)    FOR(i,0,n)
#define rrep(i,n)   for(int i=n-1;i<=0;--i)
#define repeq(i,n)   for(int i=0;i<=(n);++i)
#define loop        while(true)
typedef long long ll;
const ll INF = 1LL<<60;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const ll max_v = 100100;
const ll max_n = 110;
vector<ll> weight(max_n);
vector<ll> value(max_n);
vector<vector<ll>> dp(max_n,vector<ll>(max_v,INF));

int main() {
    // 入力
    ll N,W;cin>>N>>W;
    rep(i,N) cin >> weight.at(i) >> value.at(i);

    dp.at(0).at(0) = 0;
    rep(i,N) {
        rep(sum_v,max_v)
        {
            if( sum_v - value[i] >= 0) {
                chmin(dp.at(i+1).at(sum_v),dp.at(i).at(sum_v - value.at(i))+weight.at(i));
            }
            chmin(dp.at(i+1).at(sum_v),dp.at(i).at(sum_v));
        }
    }
    ll ans = 0;
    rep(v,max_v) {
        if( dp.at(N).at(v) <= W) ans = v;
    }
    cout << ans << endl;

    return 0;
}

