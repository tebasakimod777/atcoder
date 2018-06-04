#include "stdio.h"

int main() {
    int n, i, j;
    unsigned long d[200];

    // Nの個数を入力
    scanf("%d", &n); // これ以降絶対にnを改変しない様にすること

    for(i = 0; i < n; i++) {
        scanf("%ld", &d[i]);
    }

    // waru
    for(i = 0, j = 0; i < n; i++) {
        if( d[i] % 2 == 0) {
            d[i] = d[i] / 2;
        } else {
            break;
        }

        if( i == n - 1) {
            i = 0;
            ++j;
        }
    }

    printf("%d\n", j);

    return 0;
}

