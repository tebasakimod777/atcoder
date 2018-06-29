#include <bits/stdc++.h>
using namespace std;

int main() {
    int limit, point_a = 0, point_b = 0;
    cin >> limit;

    vector<int> card_num(limit);

    for (int i = 0; i < card_num.size(); i++)
        cin >> card_num.at(i);

    sort(card_num.begin(), card_num.end());
    reverse(card_num.begin(), card_num.end());

    for (int i = 0; i < card_num.size(); i++) {
        if( i % 2 == 0) {
            point_a += card_num.at(i);
        } else if( i % 2 == 1) {
            point_b += card_num.at(i);
        }
    }

    cout << point_a - point_b << endl;

    return 0;
}
