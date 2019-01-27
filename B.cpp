#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, miss, ans;
    string a, b, c;
    
    cin >> n >> a >> b >> c;
    
    ans = 0;

    for(int i = 0; i < n; i++) {
        miss = 0;
        if(a.at(i) != b.at(i)) miss++;
        if(b.at(i) != c.at(i)) miss++;
        if(c.at(i) != a.at(i)) miss++;

        if(miss > 0) ans += miss - 1;
    }

    cout << ans << endl;

    return 0;
}