#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
using pint = pair<int, int>;
using pstring = pair<int, string>;

int main() {
    ll ans = 0;
    ll N, X, S;
    cin >> N >> X;

    for (ll i = 0; i < N; i++) {
        cin >> S;
        if (S <= X) {
            ans += S;
        }
    }

    cout << ans << endl;

    return 0;
}
