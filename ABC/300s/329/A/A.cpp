#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
using pint = pair<int, int>;
using pstring = pair<int, string>;

int main() {
    ll ans;
    string N;
    cin >> N;

    for (ll i = 0; i < N.length(); i++) {
        cout << N.at(i) << ' ';
    }

    cout << endl;
    return 0;
}