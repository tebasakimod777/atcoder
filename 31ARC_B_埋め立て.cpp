#include <bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
typedef long long ll;
using pint = pair<int, int>;
using pstring = pair<int, string>;

char inputs[500][500];
bool seen[500][500];
ll const H = 10, W = 10;
ll s_x, s_y, l_q;
bool check = false;

void dfs(int x, int y) {
    // 壁の外or堀だったら何もせずreturn
    if( x < 0 || y < 0 || H <= x || W <= y || inputs[x][y] == 'o' )
        return;
    if( seen[x][y] == true || check) return;
    if( inputs[x][y]) {
        check = true;
        return;
    } else {
        seen[x][y] = true;

        dfs(x-1,y);
        dfs(x+1,y);
        dfs(x,y-1);
        dfs(x,y+1);
    }
}

int main() {
    ll ans;
    l_q = 0;
    for (ll i = 0; i < H; i++)
    {
        for(ll j = 0; j < W; j++) {
            char a;
            cin >> a;
            inputs[i][j] = a;
            seen[i][j] = false;
            if( a == 'o') {
                l_q++;
                s_x = i;
                s_y = j;
            }
        }
    }
    
    dfs(s_x, s_y);

    if(check) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
