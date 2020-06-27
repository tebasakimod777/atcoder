#include <stdio.h>

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int main() {
    ll i, j, k = 0;
    char ans[20];

    scanf("%lld", &i);

    while(i > 0) {
        if (i % 26 == 0) {
            j = 26;
        } else {
            j = i % 26;
        }
        ans[k] = 'a' + j - 1;
        if (i % 26 == 0) {
            i = i / 26 - 1;
        } else {
            i /= 26;
        }
        k++;
    }

    for(int i = k - 1; i >= 0; i--) {
        printf("%c", ans[i]);
    }

    printf("\n");

    return 0;
}
