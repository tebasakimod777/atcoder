#include <bits/stdc++.h>
using namespace std;

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

ll X, Y, Z, K, A[1009], B[1009], C[1009];
vector<ll> vec;

int main() {
    cin >> X >> Y >> Z >> K;
    for(int i = 0; i < X; i++) {
        cin >> A[i];
    }
    sort(A, A + X, greater<ll>());
    for(int i = 0; i < X; i++) {
        cin >> B[i];
    }
    sort(B, B + Y, greater<ll>());
    for(int i = 0; i < Z; i++) {
        cin >> C[i];
    }
    sort(C, C + Z, greater<ll>());

    for(int i = 0; i < X; i++) {
        for(int j = 0; j < Y; j++) {
            for(int k = 0; k < Z; k++) {
                if((i + 1) * (j + 1) * (k + 1) <= K) vec.push_back(A[i] + B[j] + C[k]);
                else break;
            }
        }
    }

    sort(vec.begin(), vec.end(), greater<ll>());
    for(int i = 0; i < K; i++) cout << vec[i] << endl;

    return 0;
}