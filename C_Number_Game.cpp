#include<bits/stdc++.h>
using namespace std;
int main(){
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
        int ans=0;
 
        for(int k=0;k<=n;k++){
            if(2*k-2>=n){
                break;
            }
            int flag=1;
            int tempval=k;
            for(int i=2*k-2;i>=k-1;i--){
                if(v[i]<=tempval){
                    tempval--;
                }
                else{
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                ans=k;
            }
        }
        cout << ans << endl;
    }
}