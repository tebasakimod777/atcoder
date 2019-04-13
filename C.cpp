#include <bits/stdc++.h>
using namespace std;

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int main() {
    string s;
    ll lSum, rSum, tmp;

    cin >> s;

    lSum = rSum = 0;
    tmp = s.at(0) - '0';
    for(ll i = 1; i < s.length(); i++) {
        if(s.at(i) - '0' == tmp) lSum++;

        if(tmp == 1) tmp = 0;
        else tmp = 1;
    }

    tmp = s.at(s.length() - 1) - '0';
    for(ll i = s.length() - 2; i >=0; i--) {
        if(s.at(i) - '0' == tmp) rSum++;

        if(tmp == 1) tmp = 0;
        else tmp = 1;
    }

    ll ans = min(rSum, lSum);

    cout << ans << endl;

    return 0;
}
