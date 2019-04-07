#include <bits/stdc++.h>
using namespace std;

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int main() {
    int mn, n, pos, sum;
    vector<int> time(5);
 
    f(i, 5) cin >> time.at(i);
 
    mn = 128;
    f(i, 5) {
        n = time.at(i) % 10;
        if(n != 0) {
            if(mn > n) {
                mn = n;
                pos = i;
            }
        }
    }
 
 
    sum = 0;
    f(i, 5) {
        n = time.at(i);
        if (i == pos) {
            sum += n; 
        } else if(n % 10 != 0) {
            sum += n + (10 - (n % 10));
        } else {
            sum += n;
        }
    }
 
    cout << sum << endl;

    return 0;
}