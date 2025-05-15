#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        map<int, vector<int> > mp;
        for(int i = 0; i < n ; i++){
            cin >> v[i];
            mp[v[i]].push_back(i);
        }
        while(q--){
            int a, b;
            cin >> a >> b;
            if(mp[a].size() > 0 && mp[b].size() > 0){
                if(mp[a][0] <= mp[b][mp[b].size() - 1]){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
            else{
                cout << "NO" << endl;
            }
        }

    }
}