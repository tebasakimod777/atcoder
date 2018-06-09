#include "stdio.h"

#define KAGAMI_LIMIT 100

int Kagamimochi();

int main() {

    int ans = Kagamimochi();
    printf("%d\n", ans);
    return 0;
}

int Kagamimochi() {
    int sheet_n, sheet_d[KAGAMI_LIMIT], ans_sum, now_top, ex_top;

    scanf("%d", &sheet_n);

    for( int i = 0; i < sheet_n; i++) scanf("%d", &sheet_d[i]);

    ans_sum = 0, ex_top = 101;
    for( int i = 0; i < sheet_n; i++) {
        now_top = 0;

        for (int j = 0; j < sheet_n; j++) {
            if( (now_top < sheet_d[j]) && (ex_top > sheet_d[j])) now_top = sheet_d[j];
        }

        if( now_top != 0) ++ans_sum;

        ex_top = now_top;
    }

    return ans_sum;
}
