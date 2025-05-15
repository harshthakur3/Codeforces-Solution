#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long n;
        cin >> n;
        vector<int> v(n);
        
        for(int i = 0; i < n; i++) {
            for(int j = 1; j <= 4; j++) {
                char x;
                cin >> x;
                if(x == '#') {
                    v[i] = j;
                }
            }
        }
        
        
        for(int i = v.size() - 1; i >= 0; i--) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
