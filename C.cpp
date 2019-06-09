#include <bits/stdc++.h>
using namespace std;

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int main() {
    ll n, m, ans = 1;
    cin >> n >> m;
    vector<ll> a(m);
    f(i, m) cin >> a.at(i);
    for(ll i = 1; i < m; i++) {
        // 2段以上壊れているところがないか探索
        if(a.at(i) - a.at(i - 1) == 0) {
            ans = 0;
            break;
        }
    }

    if(ans != 0) {
        if(m == 0) {
            // 2個以上飛ばす
            ll l = 1, ans = 0;
            while(n - l * 2 >= 0) {
                for(ll i = 1; i <= n - 2 * l + 1; i++) {
                    ans += i;
                    cout << ans << endl;
                }

                l++;
            }

            // 1個も飛ばさないとき
            ans += 1;
        } else {

        }
    }

    cout << ans % 1000000007 << endl;
 
    return 0;
}
