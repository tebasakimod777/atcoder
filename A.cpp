#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
using pint = pair<int, int>;
using pstring = pair<int, string>;

int main() {
    ll ans=0;
    ll L, R, d;
    cin >> L >> R >> d;
    for(int i = L; i <= R; i++) {
        if(i % d == 0) ans++;
    }
    cout << ans << endl;

    return 0;
}
