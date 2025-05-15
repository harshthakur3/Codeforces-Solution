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

        int index = -1;  
        int index1 = -1; 
        for(int i = n - 1; i > 0; i--) {
            if(v[i - 1] > v[i]) {
                index = i;
                break;
            }
        }

        if(index < 0) {
            cout << 0 << endl;
        }
        else {
            set<int> mp;
            for(int i = 0; i < index; i++) {
                mp.insert(v[i]);  
            }

            for(int i = n - 1; i >= index; i--) {
                if(mp.count(v[i]) > 0) {
                    index1 = i;
                    break;
                }
            }
            for(int i = index; i <= index1; i++){
                mp.insert(v[i]);
            }
            if(index1 = -1){
                cout << mp.size() << endl;
            }
            else{
                for(int i = index; i <= index1; i++){
                    mp.insert(v[i]);
                }
                cout << mp.size() << endl;
            }

            
            //cout << index1 << endl;
        }
    }
}
