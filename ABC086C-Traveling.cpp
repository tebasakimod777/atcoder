#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i, time, pos_x, pos_y;
    bool ans;

    cin >> N;
    vector< vector<int> > inputs;
    inputs.resize(N);
    inputs.at()

    for( i = 0; i < N; i++) {
        for (time = 0; time < inputs.at(i).at(1); time++) {
            if( pos_x != inputs.at(i).at(2)) {
                if (pos_x < inputs.at(i).at(2)) {
                    pos_x++;
                } else if (pos_x < inputs.at(i).at(2)) {
                    pos_y--;
                }
            } else if (pos_y < inputs.at(i).at(3)){
                if (pos_y < inputs.at(i).at(3)) {
                    pos_y++;
                } else if (pos_y < inputs.at(i).at(3)) {
                    pos_y--;
                }
            }
        }
        if( !((inputs.at(i).at(2) == pos_x) && (inputs.at(i).at(2) == pos_y)))
            ans = false;
    }

    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}