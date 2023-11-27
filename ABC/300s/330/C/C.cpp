#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
typedef unsigned long long ull;
using pint = pair<int, int>;
using pstring = pair<int, string>;

int main() {
    ll N;
    cin >> N;

    ll ans = N;
    for (ll x = 0; x < 2000000; x++) {
        ll y = sqrt(N - x * x);
        ans = min(ans, abs(x * x + y * y - N));
        ans = min(ans, abs(x * x + (y + 1) * ( y + 1) - N) );
    }
    cout << ans << endl;

    return 0;
}
