#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
      set<char>c;
      int ans =0;
      for(int i=0;i<n;i++){
       c.insert(s[i]);
      ans+=c.size();
      }

        cout<<ans<<endl;
    }
}