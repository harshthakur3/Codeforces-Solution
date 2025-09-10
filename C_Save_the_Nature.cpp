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
        int x, y, a, b;
        cin >> x >> a;
        cin >> y >> b;
        int k;
        cin >> k;
        if(y > x){
            swap(x, y);
            swap(a, b);
        }
        sort(v.rbegin(), v.rend());
        int l = 1, r = n, ans = -1;
        int lcm = (a*b)/__gcd(a,b);
        int m = 0;
        while(l <= r){
            int mid = (l + r)/2;
            vector<int>temp(mid, 0);
            for(int i = lcm - 1; i < mid; i += lcm){
                temp[i] = v[m];
                m++;
            }
            for(int i = a - 1; i < mid; i += a){
                if(temp[i] == 0){
                temp[i] = v[m];
                m++;
                
            }
            }
            for(int i = b - 1; i < mid; i += b){
                if(temp[i] == 0){
                    temp[i] = v[m];
                    m++;
                }
            }
            for(int i = a - 1; i < mid; i += a){
                temp[i] = v[m];
                m++;
            }
            
        }

    }
}