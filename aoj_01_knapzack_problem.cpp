// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_B&lang=jp
#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;

int main() {
    // 入力
    ll N, W; cin >> N >> W;
    vector<ll> weight(N), price(N);
    vector<vector<ll>> dp(110, vector<ll>(10010,0));
    for( ll i = 0; i < N; i++ ) cin >> price.at(i) >> weight.at(i);

    // for( ll i = 0; i < N; i++ ) {
    //     for( ll w = 0; w <= W; w++ ) {
    //         if( w >= weight[i] ) dp[i+1][w] =
    //             max(dp.at(i).at(w-weight.at(i))+price.at(i),dp.at(i).at(w));
    //         else dp[i+1][w] = dp[i][w];
    //     }
    // }

    for (int i = 0; i < N; ++i) {
        for (int w = 0; w <= W; ++w) {
            if (w >= weight[i]) dp[i+1][w] = max(dp[i][w-weight[i]] + price[i], dp[i][w]);
            else dp[i+1][w] = dp[i][w];
        }
    }

    // for (int i = 0; i <= N; ++i) {
    //     for (int w = 0; w <= W; ++w) {
    //         cout << dp[i][w] << ' ';
    //     }
    //     cout << endl;
    // }
    cout << dp[N][W] << endl;
    return 0;
}

