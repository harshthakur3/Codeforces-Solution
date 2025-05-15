#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        int count = 0; 
        for(int i = 0; i < n; i++) {
            if(a[i] < b[i]) {
                count++;
            }
        }
        if(count > 1) {
            cout << "NO" << endl;
        } 
        else if(count == 1) {
            int diff = 0;
            int diff1 = INT_MAX;
            for(int i = 0; i < n; i++){
                if(a[i] < b[i]){
                    diff = b[i] - a[i];
                }
                else{
                    diff1 = min(diff1, a[i] - b[i]);
                }
            }
            if(diff1 < diff){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
