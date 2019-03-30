#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(string s);

int main() {
    string inp;
    int flag = 0;
    
    cin >> inp;


    while(flag == 0) {
        flag = 1;
    
        for(int i = 0; i < inp.size() - 1; i++) {
            if( (inp.at(i) == 'W') && (inp.at(i+1) == 'A')) {
                inp.at(i) = 'A';
                i++;
                inp.at(i) = 'C';
                flag = 0;
            }
        }
    }
    
    cout << inp << endl;

    return 0;
}