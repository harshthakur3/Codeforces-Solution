#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if(v[0] != 1) cout << "NO" << endl;
        else{
            bool flag = true;
            int sum = v[0];
            for(int i = 1; i < n; i++){
                if(sum < v[i]){
                    flag = false;
                    break;
                }
                else{
                    sum += v[i];
                }
            }
            if(flag){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }

        }
    }
}