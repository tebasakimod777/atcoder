#include <bits/stdc++.h>
using namespace std;

int main() {
    long a, b, k, i;

    cin >> a >> b >> k;

    while (1) {
        // 高橋のターン
        if (a % 2 == 1) a--;
        a /= 2;
        b += a;
        i++;
        if (i >= k) break;

        // 青木のターン
        if (b % 2 == 1) b--;
        b /= 2;
        a += b;
        i++;
        if (i >= k) break;
    }

    cout << a << ' '<< b << endl;
}
