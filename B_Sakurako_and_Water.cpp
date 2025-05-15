#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        
        int sum = 0;
        
        // Main diagonal
        int dia = 0;
        for(int i = 0; i < n; i++) {
            dia = min(dia, matrix[i][i]);
        }
        sum += abs(dia);
        
        // Above main diagonal
        for(int i = 1; i < n; i++) {
            int as = 0;
            for(int j = 0; j < n-i; j++) {
                as = min(as, matrix[j][j+i]);
            }
            sum += abs(as);
        }
        
        // Below main diagonal
        for(int i = 1; i < n; i++) {
            int as = 0;
            for(int j = 0; j < n-i; j++) {
                as = min(as, matrix[j+i][j]);
            }
            sum += abs(as);
        }
        cout << sum << endl;
    }
    return 0;
}