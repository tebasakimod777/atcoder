#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int blue = 0;

    for(int i = 0; i < s.size(); i++) {
        if (s.at(i) - '0' == 1) {
            blue++;
        }
    }

    if(blue < s.size() - blue) cout << blue * 2 << endl;
    else cout << (s.size() - blue) * 2 << endl;

    return 0;
}
