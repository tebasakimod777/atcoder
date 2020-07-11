#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
using pint = pair<int, int>;
using pstring = pair<int, string>;

vector<ll> a(10);

bool isOK(int index, int key) {
    if (a[index] >= key) return true;
    else return false;
}
int binary_search(int key) {
    int left = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int right = (int)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()
    while (right - left > 1) {
        int mid = left + (right - left) / 2;
        if (isOK(mid, key)) right = mid;
        else left = mid;
    }
    return right;
}

int main() {
    // ll ans;
    // ll N;
    // cin >> N;
    for(int i = 0; i < 10; i++) {
        a.at(i) = i * i;
    }
    ll x; cin >> x;

    auto itr1 = lower_bound(ALL(a), x);
    auto itr2 = upper_bound(ALL(a), x);
    for(int i = 0; i < 10; i++) cout << a.at(i) << ' ';
    cout << endl;
    cout << binary_search(ALL(a), x) << endl;
    cout << *itr1 << endl;
    cout << *itr2 << endl;
    cout << itr2 - itr1 << endl;

    return 0;
}
