#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        bool flag = true;
        for(int i = 0; i < n - 2; i++){
            int l = i + 1, r = n - 1;
            while(l < r){
                int x = v[i] + v[l] + v[r];
                if(mp[x] == 0){
                    flag = false;
                    break;
                }
                l++;
            }
            if(!flag){
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout <<"NO" << endl;
        }
    }
}