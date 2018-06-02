#include "stdio.h"

int main() {
    int a, i, t;

    if ( (scanf("%d", &a)) == 1)

    i = 0;
    if( a / 100 == 1)
        i++;
    if( a / 10 == 1 || a / 10 == 11)
        i++;
    if( (a - 100) == 1 || (a - 110) == 1 || (a - 10) == 1 || a == 1)
        i++;

    printf("%d\n", i);

    return 0;
}
