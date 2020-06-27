#include <stdio.h>

#define f(i, q) for(int i = 0; i < q; i++)  
#define MAX 100001

typedef long long ll;

int main() {
    ll N, Q, sum = 0, temp, temp_b, temp_c;
    ll size_num[MAX] = {0};

    scanf("%lld", &N);
    for(int i = 0; i < N; i++) {
        scanf("%lld", &temp);
        size_num[temp]++;
        sum += temp;
    }

    scanf("%lld", &Q);
    for(int i = 0; i < Q; i++) {
        scanf("%lld %lld", &temp_b, &temp_c);
        temp = size_num[temp_b];
        size_num[temp_b] = 0;
        size_num[temp_c] += temp;
        sum -= temp * temp_b;
        sum += temp * temp_c;
        printf("%lld\n", sum);
    }

    return 0;
}
