#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int height, weight, i;

    cin >> height >> weight;
    vector<string> str(100);

    for (i = 0; i < height; i++)
        cin >> str.at(i);

    for (i = 0; i < weight + 2; i++)
        cout << "#";
    cout << endl;
    
    for (int i = 0; i < height; i++) {
        cout << "#";
        cout << str.at(i) + "#" << endl;
    }

    for (i = 0; i < weight + 2; i++)
        cout << "#";
    cout << endl;

    return 0;
}
