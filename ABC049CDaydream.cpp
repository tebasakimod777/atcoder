#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    vector<string> str;
    str.push_back("dream");
    str.push_back("dreamer");
    str.push_back("erase");
    str.push_back("eraser");
    int i, j;
    bool ans = true;

    cin >> S;

    reverse(S.begin(), S.end());
    for (i = 0; i < str.size(); i++) {
        reverse(str.at(i).begin(), str.at(i).end());
    }

    for (i = 0; i < S.size(); ) {
        bool able = false;
        for (j = 0; j < str.size(); j++) {
            if( S.substr( i, str.at(j).size()) == str.at(j)) {
                able = true;
                i += str.at(j).size();
            }
        }
        if(!able) {
            ans = false;
            break;
        }
    }

    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}