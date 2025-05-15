#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define fastt ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int32_t main(){
fastt;
int T;
cin >> T;
while(T--){
    string s,ans;
    cin >> s;
    map<char,int> m;
    for(int i=0;i<s.size();i++) m[s[i]]++;
    for(int i=0;i<s.size();i++){
        if(s[i]=='9'){
            ans.pb(s[i]);
        }
        else{
        for(auto&x:m){
            if(x.first==s[i] or x.second!=0){
                if(x.first==s[i]){
                    ans.pb(s[i]);
                    m[s[i]]--;
                }
                else if(x.second!=0){
                    m[s[i]]--;
                    ans.pb(s[i] + 1);
                }
                break;
            }
        }
        }
    }
    sort(ans.begin(),ans.end());
    cout << ans << endl;
}
return 0;
}