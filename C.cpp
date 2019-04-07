#include <bits/stdc++.h>
using namespace std;

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int main() {
    int n;
    vector<int> g(3);
    vector<ll> l;

    cin >> n;
    l.resize(n);
    f(i, n) cin >> g.at(i);
    f(i, n) cin >> l.at(i);
    sort(l.begin(), l.end());



    return 0;
}