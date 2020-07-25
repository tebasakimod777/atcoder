// https://atcoder.jp/contests/dp/tasks/dp_b
#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
const ll INF = 1LL<<60;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

vector<vector<ll>> happiness(100100, vector<ll>(3));
vector<vector<ll>> dp(100100,vector<ll>(3));
const ll ins[6][2] = { {0,1}, {0,2}, {1,0}, {1,2}, {2,0}, {2,1} };

int main() {
    // 入力
    ll N;cin>>N;
    for( ll i = 0; i < N; i++ ) 
        cin >> happiness.at(i).at(0) >> happiness.at(i).at(1) >> happiness.at(i).at(2);

    for (ll i = 0; i < N; ++i) {
        for (ll j = 0; j < 6 ; j++) {
            if (chmax( dp.at(i+1).at(ins[j][1]),
                   dp.at(i).at(ins[j][0])+
                   happiness.at(i).at(ins[j][1]) )) {
                    //    cout << i+1 << ' ' << ins[j][1] << ' ' << ins[j][0] << ' ';
                    //    cout << dp.at(i+1).at(ins[j][1]) << endl;;
                   }
        }
    }

    cout << *max_element(dp.at(N).begin(), dp.at(N).end()) << endl;

    return 0;
}

