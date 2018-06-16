#include <bits/stdc++.h>
using namespace std;

int main() {
    int count_i, count_plus, count_minus, i, ans;
    string str;
    cin >> str;

    count_i = count_plus = count_minus = ans = 0;
    for (i = 0; i < str.size(); i++) {

        if (str.at(i) == '1') {
            count_i++;
        } else if (str.at(i) == '+') {
            count_plus++;
        } else if (str.at(i) == '-') {
            count_minus++;
        }
    }

    // +
    for(i = 0; i <= count_plus; i++) {
        ans++;
    }
    // -
    for(i = 0; i < count_minus; i++) {
        ans--;
    }

    cout << ans << endl;

    return 0;
}
