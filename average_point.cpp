#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, ava, ans;
    cin >> N;
    vector<int> math(N), eng(N);

    int i;
    // 点数を入力
    for( i = 0; i < N; i++)
        cin >> math.at(i);

    ava = 0;
    // 合計点の出力
    for ( i = 0; i < N; i++)
        ava += math.at(i);
    ava /= N;

    // .at()で範囲外の配列を指定すると、強制終了だけど、 [] だとよくわからん苦なる
    for ( i = 0; i < N; i++) {
        if (ava - math.at(i) > 0) {
            cout << ava - math.at(i) << endl;
        } else {
            cout << - ava + math.at(i) << endl;
        }
    }
    return 0;
}
