#include "stdio.h"

int main() {
    unsigned int fifty_coin, hundred_coin, fhundred_coin, sum;
    int fc_i, hc_i, fhc_i, j;

    scanf("%d", &fhundred_coin);

    scanf("%d", &hundred_coin);

    scanf("%d", &fifty_coin);

    scanf("%d", &sum);

    sum /= 50;

    j = 0;

    for( fc_i = 0; fc_i <= fifty_coin; fc_i++) {
        for( hc_i = 0; hc_i <= hundred_coin; hc_i++) {
            for( fhc_i = 0; fhc_i <= fhundred_coin; fhc_i++) {
                if ( sum == (fc_i + hc_i * 2 + fhc_i * 10)) {
                    ++j;
                }
            }
        }
    }

    printf("%d\n", j);

    return 0;
}

