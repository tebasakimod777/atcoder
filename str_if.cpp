#include <bits/stdc++.h>
using namespace std;

int main() {
    string hello = "hello";
    string input_str;

    cin >> input_str;

    if (input_str == hello) {
        cout << "入力は" + hello << endl;
    }
    cout << hello + ", world!" << endl;
    hello += " ワールド!";

    cout << hello << endl;
    return 0;
}

