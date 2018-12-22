#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    int ans = 0;

    cin >> input;

    for (int i = 0; i < input.size(); i++) {
        if (input.at(i) == '0' + 2 ) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}