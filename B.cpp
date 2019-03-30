#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n, sum = 0;
    string s;
    cin >> n >> s;

    for(int i = 0; i < n; i++) {
        if(s.at(i) - 'R' == 0) {
            sum++;
        }
    }

    cout << s << endl;
    if(sum > (n / 2)) puts("Yes");
    else puts("No");

    return 0;
}