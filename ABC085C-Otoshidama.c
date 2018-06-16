#include "stdio.h"

int main() {
    int sum_money, sum_bill, ttb, ftb, otb, ans_ttb = -1, ans_ftb = -1, ans_otb = -1;

    scanf("%d %d", &sum_bill, &sum_money);

    sum_money /= 1000;

    for (ttb = 0; ttb <= sum_bill; ttb++) {
        for (ftb = 0; ftb <= (sum_bill - ttb); ftb++) {
            for (otb = 0; otb <= (sum_bill - ttb - ftb); otb++) {
                // printf("%d %d %d\n", ttb, ftb, otb);
                if ( ((otb + ftb * 5 + ttb * 10) == sum_money) && ((ttb + ftb + otb) == sum_bill)) {
                    ans_ttb = ttb;
                    ans_otb = otb;
                    ans_ftb = ftb;
                }
            }
        }
    }

    printf("%d %d %d\n", ans_ttb, ans_ftb, ans_otb);

    return 0;
}
