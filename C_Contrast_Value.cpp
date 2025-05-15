#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c = 0;
        vector<int> v(n);
        vector<int> vinc(n);
        vector<int> vdec(n);
        map<int, int> mp;
        for(int i = 0; i < n ; i++){
            cin >> v[i];
            vinc[i] = v[i];
            vdec[i] = v[i];
            mp[v[i]]++;
        }
        sort(vinc.begin(), vinc.end());
        sort(vdec.rbegin(), vdec.rend());
        if(mp.size() == 1){
            cout << 1 << endl;
        }
        else if(vinc == v || vdec == v){
            cout << 2 << endl;
        }
        else{
            int m = -1, ans = 1, u = -1;
            for (int i = 1; i < n; i++) {
                if (v[i] > v[i - 1]) u = 1;
                else if (v[i] < v[i - 1]) u = 0;
                else continue;
                if (u != m) ans++;
                m = u;
            }
            cout << ans << endl;
        } 
    }
}