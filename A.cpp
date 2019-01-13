#include <bits/stdc++.h>
using namespace std;

#define FOR_i(n) for (int i = 0; i <= n; i++)

int main() {
    double N, sum;

    cin >> N;

    FOR_i(N) {
        sum += (double)i;
    }

    cout << sum / N * 10000 << endl;

    return 0;
}