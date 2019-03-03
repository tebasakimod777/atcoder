#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b, c, i;

    cin >> a >> b >> c;

    for(i = 0; i < c; i++) {
        if(b < a * (i + 1)) {
            break;
        }
    }

    cout << i << endl;

    return 0;
}