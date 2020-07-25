// https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
const ll INF = 1<<29;
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    // 入力
    ll N; cin >> N;
    vector<ll> height(N);
    vector<ll> dp(100001,INF);
    for( ll i = 0; i < N; i++ ) cin >> height.at(i);

    dp.at(0) = 0; dp.at(1) = abs(height.at(0) -height.at(1));
    for (int i = 2; i < N; ++i) {
        // dp.at(i) = min(dp.at(i-2)+abs(height.at(i) - height.at(i-2)),
        //                dp.at(i-1)+abs(height.at(i) - height.at(i-1)));
        chmin(dp.at(i),dp.at(i-2)+abs(height.at(i) - height.at(i-2)));
        chmin(dp.at(i),dp.at(i-1)+abs(height.at(i) - height.at(i-1)));
    }

    cout << dp[N-1] << endl;

    return 0;
}

