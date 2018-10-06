#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;

    scanf("%d", &n);

    if (n == 1) {
        printf("Hello World\n");
    } else if (n == 2) {
        cin >> a >> b;
        printf("%d", a + b);
    }

    return 0;
}