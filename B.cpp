#include <bits/stdc++.h>

#define f(i, n) for(int i = 0; i < n; i++)
#define F first
#define S second
#define mod 1000000007
#define P pair<int, int>
using namespace std;

int main() {
    int a, b, c, ma = 0, sum = 0;
    bool bo = false, boo = true;
    cin >> a >> b;

    if(a == 1 || b == 1) {
        int ma2 = 0, ma3 = 0;
        f(i, max(a, b)) {
            cin >> c;
            if(c == 5) {
                ma = max(ma, ma2);
                ma2 = 0;
                bo = true;
            } else {
                if(c) boo = false;
                if(!bo) ma3 = max(ma3, c);
                ma2 = max(ma2, c);
            }
        }

        ma = max(ma, ma2);
        ma2 = min(ma2, ma3);
        while(ma2 > 5) {
            ma2 = (ma2 * 2) % 10;
            sum++;
        }
    } else {
        f(i, a) {
            f(i, b) {
                cin >> c;
                ma = max(ma, c);
                if(c == 5) bo = true;
            }
        }
    }
    if(bo) {
        while(ma > 5) {
            ma = (ma * 2) % 10;
            sum++;
        }
        cout << "Yes " << sum + 1 << endl;
    }
    else if(ma == 0 && boo) cout << "Yes 0" << endl;
    else puts("No");

    return 0;
}