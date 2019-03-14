#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, money = 0, amount = 0;
    cin >> n >> m;
    vector< pair<long long, long long> > a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
        if(amount >= m) break;
        if(a[i].second + amount > m) {
            money += a[i].first * (m - amount);
            amount = m;
        } else {
            amount += a[i].second;
            money += a[i].first * a[i].second;
        }
    }

    cout << money << endl;

    return 0;
}