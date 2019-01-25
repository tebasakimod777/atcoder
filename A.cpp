#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, num = 0;
    string r;

    cin >> n >> r;

    for(int i = 0;i < n; i++) {
        if (r.at(i) == 'A')
            num += 4;
        if (r.at(i) == 'B')
            num += 3;
        if (r.at(i) == 'C')
            num += 2;
        if (r.at(i) == 'D')
            num += 1;
    }

    printf("%.14lf", num / n);

    return 0;
}