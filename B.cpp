#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, w, ans = 0;
    vector<int> a, b;

    cin >> n >> h >> w;

    a.resize(n);
    b.resize(n);

    for (int i = 0; i < n; i++) 
        cin >> a.at(i) >> b.at(i);
    
    for (int i = 0; i < n; i++) {
        if (a.at(i) >= h && b.at(i) >= w)
            ans++;
    }

    cout << ans << endl;

    return 0;
}