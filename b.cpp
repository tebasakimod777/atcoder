#include <bits/stdc++.h>
using namespace std;

int main() {

    int i, n, t, max_c = -1, flag = 0, minimam_c = 1000;

    cin >> n >> t;

    vector<int> C(n), T(n), good_C;

    // 値を代入
    for ( i = 0; i < n; i++) {
        cin >> C.at(i) >> T.at(i);
    }

    // tより小さいものがあるかチェック
    for ( i = 0; i < n; i++) {
        if (T.at(i) <= t) {
            flag = 1;
            good_C.push_back(i);
        }
    }

    // for ( i = 0; i < good_C.size(); i++) {
    //     cout << good_C.at(i) << endl;
    // }

    if (flag == 0) {
        printf("TLE\n");
        return 0;
    }

    for (i = 0; i < good_C.size(); i++) {
        if (C.at(good_C.at(i)) < minimam_c) {
            minimam_c = C.at(good_C.at(i)); 
        }
    }

    cout << minimam_c << endl;
    return 0;
}