#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n), ans;  
        bool flag = true;
        map<int, int> mp;
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        if(!flag){
            cout << "-1" << endl;
            continue;
        }
        
        set<int> available;
        for(int i = 1; i <= n; i++){
            available.insert(i);
        }
        
        ans.push_back(v[0]);
        available.erase(v[0]);
        
        for(int i = 1; i < n; i++){
            if(v[i] != v[i - 1]){
                ans.push_back(v[i]);
                available.erase(v[i]);
            }
            else{
                int next = *available.begin();
                ans.push_back(next);
                available.erase(next);
            }
        }
        
        int maxSoFar = ans[0];
        flag = true;
        for(int i = 0; i < n; i++){
            maxSoFar = max(maxSoFar, ans[i]);
            if(maxSoFar != v[i]){
                flag = false;
                break;
            }
        }
        
        if(flag){
            for(int i = 0; i < n; i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}