#include <bits/stdc++.h>
using namespace std;

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int main() {
    ll A, B, C, X, Y, price, minX, minY;

    cin >> A >> B >> C >> X >> Y;

    price = (A * X) + (B  * Y);

    minX = X * 2 * C;
    minY = Y * 2 * C;

    if ( X > Y) {
        int mod = (X - Y) * A;
        cout << min (minX, min(minY + mod, price)) << endl;
    } else {
        int mod = (Y - X) * B;
        cout << min(minY, min(mod + minX, price)) << endl;
    }

    return 0;
}
