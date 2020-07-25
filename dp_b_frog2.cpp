// https://atcoder.jp/contests/dp/tasks/dp_b
#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
const ll INF = 1LL<<60;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    // 入力
    ll N,K;cin>>N>>K;
    vector<ll> height(110000);
    vector<ll> dp(110000,INF);
    for( ll i = 0; i < N; i++ ) cin >> height.at(i);

    dp.at(0) = 0;
    for (ll i = 0; i < N; ++i) {
        for (ll j = 1; j <= K ; j++) {
            chmin(dp.at(i+j),dp.at(i)+abs(height.at(i) - height.at(i+j)) );
        }
    }

    cout << dp[N-1] << endl;
    cout << INF << endl;

    return 0;
}

