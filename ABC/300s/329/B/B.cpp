#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
using pint = pair<int, int>;
using pstring = pair<int, string>;

int main() {
    ll ans;
    ll N;
    cin >> N;

    ll m1 = 0, m2 = 0;

    for (ll i = 0; i < N; i++) {
        ll A;
        cin >> A;
        if (m1 < A) {
            m2 = m1;
            m1 = A;
        } else if (m1 == A) {

        } else if (m2 <= A) {
            m2 = A;
        }
    }

    cout << m2 << endl;
    return 0;
}
