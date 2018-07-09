#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i, v, t_amount, now_time;
    bool can = true;

    cin >> N;

    N += 1;

    vector<int> t(N), x(N), y(N);

    N -= 1;

    t[0] = x[0] = y[0] = 0;

    for (i = 0; i < N; i++) cin >> t.at(i + 1) >> x.at(i + 1) >> y.at(i + 1);

    for( i = 0; i < N; i++) {
        v = abs(x.at(i + 1) - x.at(i)) + abs(y.at(i + 1) - y.at(i));
        t_amount = t.at(i + 1) - t.at(i);
        if ( t_amount < v) {
            can = false;
            break;
        }

        if ( !(t_amount % 2 == v % 2)) {
            can = false;
            break;
        }
    }

    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
