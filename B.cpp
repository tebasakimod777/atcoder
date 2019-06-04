#include <bits/stdc++.h>
using namespace std;

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int main() {
    string k;
    int sum = 0;

    cin >> k;

    for(int i = 0; i < k.size(); i++) {
        if(k.at(i) == 'o') sum++;
    }

    sum += 15 - k.size();

    if(sum >= 8) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}