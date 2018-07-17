#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y, ans = 0;

    cin >> x >> y;

    if ( x == 1 && y == 1) {
        ans = 1;
    } else if( x != 1 && y == 1) {
        ans = x - 2;
    } else if (x == 1 && y != 1) {
        ans = y - 2;
    } else {
        ans = (x - 2) * (y - 2);
    }

    cout << ans << endl;

    return 0;
}
