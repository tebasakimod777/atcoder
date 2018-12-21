#include <iostream>
#include <vector>
#define rep(i,n) for (int i=0;i<(n);++i)
using namespace std;
 
 
int bit_count(int bits)
{
    int cnt = 0;
    for (int mask=1; mask!=0; mask<<=1)
        if ((bits&mask) != 0) ++cnt;
    return cnt;
}
 
int main()
{
    vector<int> xs, ys;
    int n, m;
    cin >> n >> m;
    xs.resize(m); ys.resize(m);
    rep(i, m) cin >> xs[i] >> ys[i];
 
    int ans = 0;
    for (int mask=0; mask<(1<<n); ++mask) {
        int num_mbmber = bit_count(mask);
        int expected = int(num_mbmber * (num_mbmber - 1) / 2);
        if (num_mbmber <= ans) continue;

        // check complete grahp
        int cnt = 0;
        for (int j=0; j<xs.size(); ++j) {
            int x_i = xs[j] - 1;
            int y_i = ys[j] - 1;
            if (((mask & (1<<x_i)) != 0) && ((mask & (1<<y_i)) != 0)) cnt++;
        }
        if (cnt == expected)
            ans = max(ans, num_mbmber);
    }

    cout << ans << endl;
}
