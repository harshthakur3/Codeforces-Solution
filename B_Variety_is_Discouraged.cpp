#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >>  v[i];
            mp[v[i]]++;
        }
        int l = -1, r = -1;
        if(n == 1){
            cout << 1 << " " << 1 << endl;
        }
        else if(mp.size() == 1){
            cout << 0 << endl;
        }
        else{
            for(int i = 0; i < n; i++){
                
            }
        }
        

    }
}