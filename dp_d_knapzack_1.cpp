// https://atcoder.jp/contests/dp/tasks/dp_b
#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
const ll INF = 1LL<<60;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

vector<ll> weight(110);
vector<ll> value(110);
vector<vector<ll>> dp(110,vector<ll>(101000,0));

int main() {
    // 入力
    ll N,W;cin>>N>>W;
    for( ll i = 0; i < N; i++ ) 
        cin >> weight.at(i) >> value.at(i);

    for (ll i = 0; i < N; ++i) {
        for (ll sum_weight = 0; sum_weight <= W; sum_weight++)
        {
            if( sum_weight - weight[i] >= 0) {
                chmax(dp.at(i+1).at(sum_weight),dp.at(i).at(sum_weight - weight[i])+value.at(i));
            }
            chmax(dp.at(i+1).at(sum_weight),dp.at(i).at(sum_weight));
        }
    }

    cout << dp[N][W] << endl;

    return 0;
}

