#include <bits/stdc++.h>
#define f(i, n) for(int i = 0; i < n; i++)
using namespace std;

typedef long long ll;

int main() {
    string s;
    int sum, mx;

    cin >> s;

    sum = mx = 0;

    f(i, s.size()) {
        if(s.at(i) =='A' || s.at(i) =='C' || s.at(i) =='G' || s.at(i) =='T') {
            sum++;
        } else {
            mx = max(mx, sum);
            sum = 0;
        }
    }

    mx = max(mx, sum);

    cout << mx << endl;

    return 0;
}