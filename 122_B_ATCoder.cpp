#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    string input_str;
    cin >> input_str;

    ll ans = 0, N = input_str.size();
    ll i = 0, j, k;
    while(i < N) {
        for(j = i; j < N; j++) {
            if (input_str[j] == 'A' || 
                input_str[j] == 'T' ||
                input_str[j] == 'C' ||
                input_str[j] == 'G') {
                ans = max(ans, j - i + 1);
            } else {
                j++;
                break;
            }
        }
        i = j;
    }

    cout << ans << endl;

    return 0;
}
