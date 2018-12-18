#include <bits/stdc++.h>
using namespace std;

int main() {
    const string boin = "aiueo";
    string remark, nuki;
    bool flg;

    int i, j;
    cin >> remark;

    nuki.resize(remark.size());
    for (i = 0; i < remark.size(); i++) {
        flg = true;
        for (j = 0; j < boin.size(); j++) {
            if (remark.at(i) == boin.at(j)) {
                flg = false;
            }
        }
        if (flg) {
            cout << remark.at(i);
        }
    }
    putchar('\n');
    return 0;
}