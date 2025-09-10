#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
     int t;
     cin >> t;
     while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        bool odd = false, even = false;
        for(int i = 0; i < n; i++){
            if(v[i]%2 == 0){
                even = true;
            }
            else{
                odd = true;
            }
        }

        if((even == true && odd == false) || (even == false && odd == true)){
            int count = 0;
            for(int i = 1; i <= n; i++){
                if(n%i == 0){
                    count++;
                }
            }
            cout << count << endl;
        }
        else if(even == true && odd == true){
            // cout << "temp" << endl;
            
        }
     }
}