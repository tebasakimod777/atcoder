#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i, v, t_amount, now_time;
    bool can = true;

    cin >> N;

    cout << N << endl;
    N += 1;
    cout << N << endl;
    vector<int> t(N), x(N), y(N);

    cout << N << endl;
    t.at(0) = x.at(0) = y.at(0) = 0;

    cout << N << endl;
    for (i = 0; i < N; i++) cin >> t.at(i + 1) >> x.at(i + 1) >> y.at(i + 1);
    cout << N << endl;

    for( i = 0; i < N; i++) {
    cout << N << endl;
        v = abs(x.at(i + 1) - x.at(i)) + abs(y.at(i + 1) - y.at(i));
    cout << N << endl;
        t_amount = t.at(i + 1) - t.at(i);
    cout << N << endl;
        if ( !(t_amount <= v)) {
            can = false;
            break;
        }
        if ( !(t_amount % 2 == v % 2)) {
            can = false;
            break;
        }
    }

    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
