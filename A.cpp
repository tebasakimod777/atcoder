#include <bits/stdc++.h>
using namespace std;

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int main() {
    vector<int> time(3);
    int sum = 0;

    f(i, 3) {
        cin >> time.at(i);
    }

    sort(time.begin(), time.end());

    cout << time.at(0) + time.at(1) << endl;

    return 0;
}