#include "stdio.h"

#define NUM_LIMIT 110

int main() {
    int limit, input_num[NUM_LIMIT],  alic_point, bob_point, aim_i, tmp;

    // カードの枚数を決める
    if ( (scanf("%d", &limit)) == 1)

    for( int input_i = 0; input_i < limit; input_i++) {
        if (scanf("%d", &input_num[input_i]) == 1);
    }

    for(int swap_i = 0; swap_i < limit; swap_i++){
        for(int aim_i = limit - 1; aim_i > swap_i; aim_i--){
            if(input_num[aim_i] > input_num[aim_i - 1]){
                tmp = input_num[aim_i];
                input_num[aim_i] = input_num[aim_i - 1];
                input_num[aim_i - 1] = tmp;
            }
        }
    }

    alic_point = 0, bob_point = 0;

    for( int take = 0; take < limit; take++) {

        if ( take % 2 == 0) {
            alic_point += input_num[take];
        } else  {
            bob_point += input_num[take];
        }
    }

    printf("%d\n", alic_point - bob_point);

    return 0;
}

