#include <stdio.h>
#include <stdlib.h>

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int comp(const void* a, const void* b){
    ll x = *(ll*)a;
    ll y = *(ll*)b;

    return x - y;
}

int main() {
    ll a, b;
    ll ans = 0;
    ll in[1001];
    scanf("%lld %lld", &a, &b);
    for(int i = 0; i < a; i++) {
        scanf("%lld", &in[i]);
    }

    qsort(in, a, sizeof(ll), comp);

    for(int i = 0; i < b; i++) {
        ans += in[i];
    }
    printf("%lld\n", ans);
    return 0;
}
