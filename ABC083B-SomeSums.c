#include "stdio.h"

int main() {
    int n, a, b, sum, i, t;

    sum = 0; t = 0;

    scanf("%d %d %d", &n ,&a, &b);


    for(i = 1; i <= n; n++) {


    //     if ( i < 10 ) {
    //         t = i;
    //     } else if (10 < i && i < 100) {
    //         t = n  / 10;

    //         t += n % 10;
    //     } else if (100 < i && i < 1000) {
    //         t += n / 100;

    //         t += (n / 10) % 10;

    //         t += n % 10;

    //     } else if ( 1000 <= i ) {
        t = n / 1000;

        t += (n / 100) % 10;

        t += (n / 10) % 10;

        t += n % 10;

    //     }
        if ( a <= t && t <= b)
            sum += t;
    }

    printf("%d\n", sum);

    return 0;
}
