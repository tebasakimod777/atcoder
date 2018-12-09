    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int vv, ans;

        cin >> vv;

        if ( vv < 100) {
            ans = 0;
        } else if( 100 <= vv && vv <= 5000) {
            ans = vv / 100;
        } else if ( 6000 <= vv && vv <= 30000 ) {
            ans = vv / 1000 + 50;
        } else if (35000 <= vv && vv <= 70000) {
            ans = (vv / 1000 - 30) / 5 + 80;
        } else {
            ans = 89;
        }

        printf("%02d\n", ans);

        return 0;
    }