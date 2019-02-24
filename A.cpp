#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    string y, m, d;

    cin >> s;

    m = s.substr(5, 2);
    d = s.substr(8, 2);
    
    string ans = "TBD";
    if( atoi(m) <= 4 && atoi(d) <= 30) {
        ans = "Heisei";
    }

    cout << ans << endl;
    return 0;
}