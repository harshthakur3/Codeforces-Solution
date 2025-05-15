#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        if(v[n - 1] == 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            vector<int> ans;  
            int j = n - 1;
            while(j >= 0) {
                int tempj = j;
                int one = 0, zero = 0;
                
                while(tempj >= 0 && v[tempj] == 0) {
                    zero++;
                    tempj--;
                }
                while(tempj >= 0 && v[tempj] == 1) {
                    one++;
                    tempj--;
                }
                
                for(int i = 0; i < zero - 1; i++) {
                    ans.push_back(0);
                }
                for(int i = 0; i < one; i++) {
                    ans.push_back(0);
                }
                ans.push_back(one);
                j = tempj;
            }
            
            for(auto it : ans) {
                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}