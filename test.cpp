#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v{1, 2, 3, 4};

    v.erase(v.begin() + 1);
    
    for(int i = 0; i < v.size(); i++) cout << v.at(i) << endl;

    v.erase(v.begin() + 1);

    for(int i = 0; i < v.size(); i++) cout << v.at(i) << endl;

    return 0;
}