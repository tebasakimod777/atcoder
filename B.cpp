#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
using pint = pair<int, int>;
using pstring = pair<int, string>;

vector<int> a(100);
int main() {
    ll ans = 0;
    ll N;
    cin >> N;
    for(ll i = 0; i < N; i++) {
        cin >> a.at(i);
    }
    for(ll j = 0; j < N; j += 2) {
        if(a.at(j) % 2 == 1) ans++;
    }
    cout << ans << endl;

    return 0;
}
