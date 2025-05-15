#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v, vi;
        for(int i = 0; i < n ; i++){
            int k;
            cin >> k;
            if(k < i + 1){
                vi.push_back(i + 1);
                v.push_back(k);
            }   
        }
        int count = 0;
        for(int i = 0 ; i < v.size(); i++){
            int l = 0, r = v.size() - 1;
            int ctr = - 1;
            while(l <= r){
                int mid = (l + r)/2;
                if(vi[mid] < v[i]){
                    ctr = mid;
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
            if(ctr != -1){
                count += ctr + 1;
            }
        }
        cout << count << endl;
        
    }
}