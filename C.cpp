#include <bits/stdc++.h>
using namespace std;

#define FOR_i(n) for (long double i = 0; i < n; i++)

int main() {
    double n, k, score;
    vector<double> r;

    cin >> n >> k;

    r.resize(n);

    FOR_i(n) cin >> r.at(i);

    sort(r.begin(), r.end());

    score = 0.0;

    FOR_i(k) {
        score = (score + r.at( n - k + i)) / 2.0;
    }

    printf("%.6lf\n", score);

    return 0;
}