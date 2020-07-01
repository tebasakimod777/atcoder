#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

#define MAX 10000001

int asc_comp(const void* a, const void* b){
    ll x = *(ll*)a;
    ll y = *(ll*)b;
    return x - y;
}

int main() {
    ll N;
    scanf("%lld", &N);
    ll ret[N];

    ll at = 0;
    for (ll i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            ret[at] = i; 
            at++;
            if (i * i != N) {
                ret[at] = N / i;
                at++;
            }
        }
    }
    qsort(ret, N, sizeof(ll), asc_comp);
    for (ll i; i < N; i++) {
        printf("%lld\n", ret[i]);
    }
    return 0;
}
