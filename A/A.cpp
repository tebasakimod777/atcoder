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
    ll ans;
    ll N;
    cin >> N;

    if( 400 <= N and N <= 599) cout << 8;
    else if( 600 <= N and N <= 799) cout << 7;
    else if( 800 <= N and N <= 999) cout << 6;
    else if( 1000 <= N and N <= 1199) cout << 5;
    else if( 1200 <= N and N <= 1399) cout << 4;
    else if( 1400 <= N and N <= 1599) cout << 3;
    else if( 1600 <= N and N <= 1799) cout << 2;
    else if( 1800 <= N and N <= 1999) cout << 1;
    cout << endl;
    return 0;
}
