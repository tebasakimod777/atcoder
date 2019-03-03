#include <bits/stdc++.h>
using namespace std;

int solve(string s);

int main() {
    string s;
    int count, a, b;
    a = b = 0;

    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(s.at(i) == '0') a++;
        else b++;
    }
    
    if(a > b) count = 2 * b;
    else count = 2 * a;

    // count = solve(s);
    
    cout << count << endl;

    return 0;
}

// int solve(string s) {
//     int count, flg;

//     do {
//         flg = 1;
//         if(s.size() < 2) break;
//         for(int i = 0; i < (s.size() - 1); i++) {
//             while((s.at(i) == '0' && s.at(i + 1) == '1') || (s.at(i) == '1' && s.at(i + 1) == '0')) {
//                 // cout << i << endl;a
//                 count += 2;
//                 s.erase(s.begin() + i);
//                 s.erase(s.begin() + i);
//                 // cout << i << endl;

//                 flg = 0;
//                 if(s.size() == 0) return count;
//                 if(i >= (s.size() - 1))
//                     break;
//             }
//             // cout << "break" << endl;
//         }
//         // cout << count << endl;
//     } while(flg == 0);

//     return count;
// }