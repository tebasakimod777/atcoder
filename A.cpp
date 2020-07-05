#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    ll ans;
    ll N;
    cin >> N;

    if (N % 1000)
    {
        cout << 1000 - (N % 1000) << endl;
    } else {
        cout << N % 1000 << endl;
    }
    

    return 0;
}
