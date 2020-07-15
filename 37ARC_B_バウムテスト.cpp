#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
using pint = pair<int, int>;
using pstring = pair<int, string>;

ll const MAX_BRANCH = 100;
vector<bool> seen(MAX_BRANCH);
ll N, M;
ll s_x, s_y, l_q;
bool check = false;
map<int,stack<int>> tree;

void dfs(int x) {
    while(!tree.at(x).empty()) {
        seen[x] = true;
        int next = tree.at(x).top();
        tree.at(x).pop();
        if( seen.at(next) == true) {
            return;
        }
    }
}

int main() {
    ll ans;
    l_q = 0;
    cin >> N >> M;
    for( ll i = 0; i < M; i++ ) {
        ll u, v;
        cin >> u >> v;
        tree.at(u).push(v);
    }
    for( ll i = 0; i < N; i++ ) {
        seen.at(i) = false;
    }
    
    for( ll i = 0; i < N; i++ ) {
        dfs(i);
    }

    if(check) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
