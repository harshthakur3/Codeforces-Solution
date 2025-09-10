#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        int count = 0;
        bool flag = false;

        for(int i = 0; i < n; i++){
            if(s[i] == '1') count++;
            else count = 0;
            if(count == k) flag = true;
        }

        if(flag) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            int val = 1;
            vector<int> a(n);

            // Fill positions based on string
            for(int i = 0; i < n; i++){
                if(s[i] == '1') {
                    a[i] = val++;
                }
            }
            for(int i = 0; i < n; i++){
                if(s[i] == '0') {
                    a[i] = val++;
                }
            }

            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}
