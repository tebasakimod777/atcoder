#include <bits/stdc++.h>
using namespace std;

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int main() {
    int A, B, X;

    cin >> A >> B;

    X = max( A + (A - 1), B + (B - 1));

    X = max(X, A + B);
    
    cout << X<< endl;

    return 0;
}