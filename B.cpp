#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

#define MAX 200001

// 昇順にソート
int asc_comp(const void* a, const void* b){
    ll x = *(ll*)a;
    ll y = *(ll*)b;
    return x - y;
}
// 降順にソート
int dec_comp(const void* a, const void* b){
    ll x = *(ll*)a;
    ll y = *(ll*)b;
    return y - x;
}

int main() {
    // qsort(in, a, sizeof(ll), dec_comp);
    char inp[MAX], oup[MAX];
    scanf("%s %s", inp, oup);
    ll at = 0, sum = 0;
    while(inp[at] != '\0') {
        if (inp[at] != oup[at]) {
            sum++;
        }
        at++;
    }
    printf("%lld\n", sum);

    return 0;
}
