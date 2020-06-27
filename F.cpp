#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

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

    return 0;
}
