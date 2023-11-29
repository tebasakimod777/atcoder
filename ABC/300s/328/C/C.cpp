#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
using pint = pair<int, int>;
using pstring = pair<int, string>;

int main() {
    ll ans;
    ll N, Q;
    string S;
    cin >> N >> Q;
    cin >> S;

    vector<ll> co(N, 0);
    vector<ll> re(N, 0);
    for (ll i = 1; i < N; i++) {
        if (S.at(i-1) == S.at(i))
            co.at(i) = 1;
    }
    for (ll i = 1; i < N; i++) {
        re.at(i) = co.at(i) + re.at(i-1);
    }

    // for (const auto &i: re) cout << i << ' ';
    // cout << endl;

    ll left, right;
    for (ll i = 0; i < Q; i++) {
        cin >> left >> right;
        cout << re.at(right-1) - re.at(left-1) << endl;
    }

    return 0;
}