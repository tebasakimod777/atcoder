#include <bits/stdc++.h>
using namespace std;

int main() {
    int inputs[3];
    int tmp, count, x, y;
    scanf("%d %d %d", &inputs[0], &inputs[1], &inputs[2]);

    sort(inputs, inputs + 3);

    x = inputs[2] * 10 + inputs[1];
    y = inputs[0];

    printf("%d\n", x + y);

    return 0;
}