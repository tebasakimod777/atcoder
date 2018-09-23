#include <bits/stdc++.h>
using namespace std;

int main() {

    string S, T;
    vector<int> s, t;
    char a, b;

    cin >> S;
    cin >> T;
    
    sort(S.begin(), S.end());
    sort(T.begin(), T.end());

    for (int i = 0; i < S.size(); i++) {
        
        if (S.at(i) == a){
            s.end()++;
        } else {
            s.push_back(1);
            a = S.at(i);
        }

        if (S.at(i) == b) {
            t.end()++;
        } else {
            t.push_back(1);
            b = S.at(i);
        }
    }

    if (s == t) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
