#include <bits/stdc++.h>
using namespace std;

#define FOR_i(n) for (int i = 0; i < n; i++)

const string win = "You can win", lose = "You will lose", wild_char = "atcoder@";

int comp(string s, string t);

int dout(char s);

int main() {
    string s, t;
    cin >> s >> t;

    int flag = comp(s, t);

    if (flag == 0)
        cout << win << endl;
    else 
        cout << lose << endl;

    return 0;
}

int comp(string s, string t) {
    int flag = 0;
    int wld_flg;
    FOR_i(s.size()) {
        if (s.at(i) != t.at(i)) {
            wld_flg = 1;
            if (s.at(i) == '@') {
                wld_flg = dout(t.at(i));
            } else if (t.at(i) == '@') {
                wld_flg = dout(s.at(i));
            } 
            
            if (wld_flg == 1) {
                flag = 1;
                break;
            }
        }
    }

    return flag;
}

int dout(char s) {
    FOR_i(wild_char.size())
        if (s == wild_char.at(i))
            return 0;

    return 1;
}