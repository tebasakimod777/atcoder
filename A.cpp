#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, a1, a2;

    cin >> n >> a >> b;

    a1 = abs(a - b);
    a2 = abs(max(a, b) - a1);
    
    a1 = a + b - n;

    if (a1 < 0) a1 = 0;

    printf("%d %d\n", a2, a1);

    return 0;
}