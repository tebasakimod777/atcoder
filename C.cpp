#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)   FOR(i,0,n)
typedef long long ll;
const ll INF = 1LL<<60;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using pint = pair<int, int>;
using pstring = pair<int, string>;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> score(N+2,1);
    for(ll i = 1; i<N+1; i++) cin >> score.at(i);
    // 最初のK番目の点数を計算
    for( ll i = K+1; i <= N; i++) {
        if( score.at(i-K) < score.at(i) ) { cout << "Yes" << endl; }
        else { cout << "No" << endl; }
    }

    return 0;
}
