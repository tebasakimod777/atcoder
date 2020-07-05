#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MAX = 500000;

int main() {
    ll ans;
    ll N;
    ll input[MAX];
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> input[i];
    }

    sort(input, input + N, greater<ll>());
    ans = 0;

    for(int i = 0; i < N - 1;i++) {
        ans += input[i];
    }

    cout << ans << endl;

    return 0;
}
