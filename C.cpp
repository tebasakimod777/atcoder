#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
using pint = pair<int, int>;
using pstring = pair<int, string>;

int main() {
    ll sum;
    ll N;
    cin >> N;
    vector<ll> ans(10001);
    for(ll i = 0; i < N; i++) ans.at(i) = 0;

    for(ll i = 1; i*i+1+1 +i+i+1<= N; i++) {
        for (ll j = i; j*j+i*i+1 + i*j+i+j<= N; j++) {
            for (ll k = j; sum = i*i+j*j+k*k + i*j+j*k+k*i, sum <= N; k++) {
                if( i == j && i == k) ans.at(sum) += 1;
                else if (i != j && i != k && k != j) ans.at(sum) += 6;
                else ans.at(sum) += 3;
                // if(sum == 9997) 
                // cout << i << ' ' << j << ' ' << k << ' ' << sum << endl;

            }
        }
    }

    // cout << endl;
    for(ll i = 1; i <= N; i++)  cout << ans.at(i) << endl;
    return 0;
}
