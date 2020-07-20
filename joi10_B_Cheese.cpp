#include <bits/stdc++.h>
using namespace std;

// 以下は文頭へ
using Graph = vector<vector<char>>;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;

int main() {
    ll ans;
    pair<ll,ll> start;
    ll H, W, N; cin >> H >> W >> N;
    Graph G(H, vector<char>(W));
    for( ll i = 0; i < H; i++ ) {
        for( ll j = 0; j < W; j++ ) {
            char a; cin >> a;
            G.at(i).at(j) = a;
            if( a = 'S' ) {
                start.first = i; start.second = j;
            }
        }
    }

    vector<vector<ll>> seen(H, vector<ll>(W, -1));
    queue<pair<ll,ll>> q;

    seen.at(start.first).at(start.second) = 0;
    q.push(start);
    while(!q.empty()) {
        pair<ll,ll> point = q.front();
        q.pop();

        if (dist.at(point.first).at(point.second) == -1) continue; // すでに発見済みの頂点は探索しない
        
        if (0 < point.first - 1) 
        dist[point.first, point.second] = 0;
        que.push();
    }
    cout << ans << endl;

    return 0;
}

