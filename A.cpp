#include <stdio.h>

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int main() {
    ll i, j, k;
    ll ans = 0;

    char input;
    scanf("%c", &input);

    // printf("%d\n", input);

    if((input - 91) < 0) {
        printf("A\n");
    } else {
        printf("a\n");
    }

    // printf("lld\n", ans);

    return 0;
}
