#include <bits/stdc++.h>
#define f(i, n) for(int i = 0; i < n; i++)
using namespace std;

typedef long long ll;

int main() {
    int n, q, l, r, sum;
    vector<int> t;
    string s;

    cin >> n >> q >> s;
    t.resize(n);
    fill(t.begin(), t.end(), 0);

    for(int i = 1; i < n; i++) {
        if(s.at(i - 1) =='A' && s.at(i) =='C')
            t.at(i) = t.at(i - 1) + 1;
        else t.at(i) = t.at(i - 1);
    }

    f(i, q) {
        cin >> l >> r;
        cout << t.at(r - 1) - t.at(l - 1) << endl;
    }

    return 0;
}