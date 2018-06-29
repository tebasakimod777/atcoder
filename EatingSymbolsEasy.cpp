#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int num = 0;

    for(int i = 0; i < S.size(); i++) {
        if( S.at(i) == '+') {
            num++;
        } else if (S.at(i) == '-') {
            num--;
        }
    }

    cout << num << endl;

    return 0;
}
