#include <bits/stdc++.h>
using namespace std;

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

int main() {
    vector<ll> time(5);
    ll n, count, bg, en, mn;
 
    cin >> n;
    f(i, time.size()) cin >> time.at(i);
 
    // 最小地（最大値）について
    mn = *std::min_element(time.begin(), time.end());
    // これもあるが
    sort(time.begin(), time.end());
    cout << (n - 1) / mn + 5 << endl;
 
    // 失敗例
    // vector< pair<ll, ll> > spot(6);
    // f(i, spot.size() - 1) cin >> spot.at(i).first;
    // f(i, spot.size()) spot.at(i).second = 0;
    // spot.at(0).second = n;
 
    // bg = en = count = 0;
    // while(spot.at(5).second != n) {
    //     count++;
    //     if(en < 5) en++;
 
    //     for(ll i = en - 1; i >= bg; i--) {
    //         if(spot.at(i).second > spot.at(i).first) {
    //             spot.at(i + 1).second += spot.at(i).first;
    //             spot.at(i).second -= spot.at(i).first;
    //         } else {
    //             spot.at(i + 1).second += spot.at(i).second;
    //             spot.at(i).second = 0;
    //         }
    //     }
    //     if(spot.at(bg).second <= 0) bg++;
 
    //     for(ll i = 0; i < 6; i++) {
    //         cout << spot.at(i).second << " ";
    //     }
    //     cout << endl;
    // }
    
    // cout << count << endl;

    return 0;
}