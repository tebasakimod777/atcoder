#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
using pint = pair<int, int>;
using pstring = pair<int, string>;

int main() {
    ll ans;
    ll N;
    string S;
    cin >> N >> S;

    std::map<char, ll> mp;
    ll tmpi = 1;
    for (ll i = 0; i < N - 1; i++) {
        decltype(mp)::iterator it = mp.find(S.at(i));

        if (S.at(i) != S.at(i+1)) {
            if (it != mp.end()) { // すでにある場合
                if (mp[S.at(i)] < tmpi) {
                    mp[S.at(i)] = tmpi;
                } // 小さい場合は更新しない
            } else { // ない場合
                mp[S.at(i)] = tmpi;
            }
            // printf("%c %lld\n", S.at(i), tmpi);
            tmpi = 1;
        } else {
            tmpi++;
        }
    }

    // 最後の文字
    decltype(mp)::iterator it = mp.find(S.at(N-1));
    if (N == 1) {
        mp[S.at(N-1)] = 1;
    } else if (S.at(N-2) != S.at(N-1) && (it == mp.end())) {
        mp[S.at(N-1)] = 1;
    } else if (S.at(N-2) == S.at(N-1)) {
        if (it == mp.end()) {
            mp[S.at(N-1)] = tmpi;
        } else if (mp[S.at(N-1)] < tmpi) {
            mp[S.at(N-1)] = tmpi;
        }
    }

    ans = 0;
    for (const auto &i: mp) {
        ans += i.second;
    }

    cout << ans << endl;

    return 0;
}
