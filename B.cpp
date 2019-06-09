#include <bits/stdc++.h>
using namespace std;

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int main() {
    int n, suma, sumb;
    vector<int> w(100);

    cin >> n;
    f(i, n) cin >> w.at(i);

    suma = w.at(0);
    sumb = 0;
    for(int i = 1; i < n; i++) sumb += w.at(i);

    int min = 10001;
    for(int i = 1; i < n; i++) {
        if(min > abs(suma - sumb)) {
            min = abs(suma - sumb);
        }

        suma += w.at(i);
        sumb -= w.at(i);
    }

    cout << min << endl;
 
    return 0;
}