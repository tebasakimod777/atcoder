#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, c;

    cin >> n >> m >> c;

    vector<int> B(m);
    vector< vector<int> > A;

    A.resize(n);

    for(int i = 0; i < m; i++) {
        cin >> B.at(i);
    }

    for(int i = 0; i < n; i++) {
        A[i].resize(m);
        for(int j = 0; j < m; j++)
            cin >> A[i][j];
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        int sum = c;
        for(int j = 0; j < m; j++) {    
            sum += A[i][j] * B.at(j);
            // cout << A[i][j] * B.at(j) << endl;
        }
        
        if(sum > 0) count++;
    }
    
    cout << count << endl;
    return 0;
}