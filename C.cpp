#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    long long maxt = 0, maxa = 0;

    cin >> n;

    vector<int> sum(n);

    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        sum.at(i) = a + b;
        maxt += b;
    }

    sort(sum.begin(), sum.end(), greater<int>());

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0)
        maxa += sum.at(i);
    }

    cout << maxa - maxt << endl;

    return 0;
}