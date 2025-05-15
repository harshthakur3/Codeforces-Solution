#include<bits/stdc++.h>
using namespace std;
#define long long int
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        map<int , int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        int mex = -1;
        for(int i = 0; i <= n; i++){
            if(mp[i] == 0){
                mex = i;
                break;
            }
        }
        if(mex  > n/2){
            cout << -1 << endl;
        }
        else if(mex == 0){
            cout << 2 << endl;
            cout << 1 << " " << 1 << endl;
            cout << 2 << " " << n << endl;
        }
        else{
            bool flag = false;
            int len = -1;
            map<int, int> check, check1;
            int cnt = 0;
            int cnt1 = 0;
            for(int i = 0; i < n; i++){
                if(check[v[i]] == 0 && v[i] < mex){
                    check[v[i]]++;
                    cnt++;
                    if(cnt == mex){
                        len = i;
                        break;
                    }
                }
            }
            for(int i = len + 1; i < n; i++){
                if(v[i] < mex && check1[v[i]] == 0){
                    check1[v[i]]++;
                    cnt1++;
                    if(cnt1 == mex){
                        flag = true;
                        break;
                    }
                }

            }

            if(flag){
                cout << 2 << endl;
                cout << 1 << " " << len + 1 << endl;
                cout << len + 2 << " " << n << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }

}