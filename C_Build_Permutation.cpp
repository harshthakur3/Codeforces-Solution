#include <bits/stdc++.h>
using namespace std;


#define pro_speed() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

int32_t main() {
    pro_speed();
    int t;
    cin >> t;
    int test=1;
    while(t--){

        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp; 
        for(int i=0;i<n;++i) v[i]=i;
        for(int i=n-1;i>=0;--i){
           
            int j=i; if(mp[j]) continue;
            while(j>=0){
                int temp=sqrt(v[i]+v[j]);
                temp*=temp;
                if(temp==(v[i]+v[j])){ swap(v[i],v[j]); mp[j]++; mp[i]++; break;}
                j--;
            }
        }
        for(int i=0;i<n;++i) cout << v[i] << " ";
        cout << "\n";
    }
return 0;
}