#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    vector<int> sum(4);
    int size, temp;
    string a;
    
    cin >> size;
    cin >> a;

    for (int i = 1; i <= 4; i++) {

        for (int j = 0; j < size; j++) {
            if(a.at(j) == '0' + i) {
                sum[i - 1]++;
            }            
        }    
    }

    sort(sum.begin(), sum.end());

    printf("%d %d\n", sum.at(3), sum.at(0));

    return 0;
}