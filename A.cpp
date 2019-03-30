#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    char a, b;

    cin >> b;

    if(b == 'A') a = 'T';
    else if(b == 'C') a = 'G';
    else if(b == 'G') a = 'C';
    else if(b == 'T') a = 'A';

    cout << a << endl;

    return 0;
}