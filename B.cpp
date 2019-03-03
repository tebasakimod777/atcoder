#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b, k, i, count;

    cin >> a >> b >> k;

    count = 0;
    for(i = a; i > 0; i--) {
        if((a % i == 0) && (b % i == 0)) {
            // cout << i << endl;
            count++;
        }
        if(k == count) break;
    }
    
    cout << i << endl;

    return 0;
}