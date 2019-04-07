#include <bits/stdc++.h>
using namespace std;

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int main() {
    vector<int>  spot(5);
    int k;
 
    f(i, 5) cin >> spot.at(i);
    cin >> k;
 
    int flg = 1;
    f(i, 3) {
        for(int j = i + 1; j < 5; j++) {
            // cout << i << endl;
            if(abs(spot.at(i) - spot.at(j)) > k)
                flg = 0;
        }
    }
 
    if(flg == 0) puts(":(");
    else puts("Yay!");

    return 0;
}