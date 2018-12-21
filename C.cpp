#include <bits/stdc++.h>
using namespace std;

int main() {
    float x[3], y[3], ab[2], ac[2];
    int i;
    float ans;
    for (i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }
    ab[0] = x[1] - x[0];
    ab[1] = y[1] - y[0];
    ac[0] = x[2] - x[0];
    ac[1] = y[2] - y[0];
    ans = (ab[0] * ac[1] - ab[1] * ac[0]) / 2;

    printf("%0.1f\n", abs(ans));

    return 0;
}