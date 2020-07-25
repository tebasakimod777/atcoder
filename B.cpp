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
    ll R, G, B, K;
    cin >> R >> G >> B >> K;

    bool flg = false;
    REP(i, K) 
    {
        if( G <= R) { G *= 2; }
        else if ( G >= B) { B *= 2; }
    }
    if( R < G and G < B ) {
        flg = true;
    }

    if(flg) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
