#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> mp;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        if(mp[2]%2){
            cout << -1 << endl;
        }
        else{
            if(mp[2] == 0){
                cout << 1 << endl;
            }
            else{
                int k = mp[2]/2;
                for(int i = 0; i < n; i++){
                    if(v[i] == 2){
                        k--;
                        if(k == 0){
                            cout << i + 1 << endl;
                            break;
                        }
                    }
                }
            }
        }
    }
}