#include "stdio.h"

int main() {
    int n, a, b, sum, i, t, check;

    scanf("%d %d %d", &n ,&a, &b);

    sum = 0;

    for(i = 1; i <= n; i++) {

        check = i;
        t = 0;

        while ( check > 0) {

            if (check < 10) {
                t += check;
                break;
            } else {
                t += check % 10;
                check /= 10;
            }
        }

        if ( (a <= t) && (t <= b)) sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
