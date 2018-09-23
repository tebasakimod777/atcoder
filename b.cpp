#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, X, Y, i;

    scanf("%d %d %d %d", &N, &M, &X, &Y);
    vector <int> x(N);
    vector <int> y(M);

    for ( i = 0; i < N; i++)
        scanf("%d", &x.at(i));

    sort(x.begin(), x.end());
    reverse(x.begin(), x.end());


    for ( i = 0; i < M; i++)
        scanf("%d", &y.at(i));

    sort(y.begin(), y.end());

    // 条件1 X < Z <= Y
    if (X >= Y) {
        printf("War");
        return 0;
    }

    // 条件1/2 X<Z, Z<=Y
    if (x.at(0) >= y.at(0)) {
        printf("War");
        return 0;
    }

    if (X >= y.at(0)) {
        printf("War");
        return 0;
    }

    if (Y <= x.at(0)) {
        printf("War");
        return 0;
    }

    printf("No War");

    return 0;
}