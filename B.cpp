#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<double> money(10);
    vector<string> u(10);
    int n;
    const double btc = 380000.0;
    long double sum = 0.0;
    cin >> n;

    for(int i = 0; i < n; i++) cin >> money.at(i) >> u.at(i);
    
    for(int i = 0; i < n; i++) {
        if(u.at(i) == "JPY") sum += money.at(i);
        else if(u.at(i) == "BTC") sum += money.at(i) * btc;
    }

    cout << sum << endl;

    return 0;
}