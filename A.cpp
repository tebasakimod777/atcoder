#include <bits/stdc++.h>
using namespace std;

#define SWAP(A, B) int temp; temp = A; A = B; B = temp;

int main() {
    int n;

    vector<int> card = {1, 2, 3, 4, 5, 6};

    cin >> n;

    for(int i = 0;i < n; i++) {
        SWAP(card.at( i % 5 + 1, i % 5 + 2);
    }

    for (int i = 0; i < card.size(); i++) {
        cout << card.at(i);
    }

    return 0;
}