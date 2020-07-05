#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    ll ans;
    ll N;
    cin >> N;
    ll ac = 0, wa = 0, tle = 0, re = 0;
    string input;
    for(int i = 0; i < N; i++) {
        cin >> input;
        if(input == "AC") {
            ac++;
        } else if (input == "WA") {
            wa++;
        } else if (input == "TLE") {
            tle++;
        } else if (input == "RE") {
            re++;
        }
    }

    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;

    return 0;
}
