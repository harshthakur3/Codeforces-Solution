#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s,c;
        cin >> s >> c;
        int ans=0;
        
            int j=0;
            for(int i=0;i<s.size();++i){
                for(int j=0;j<c.size();++j){
                    int sum=0;
                    if(s[i]==c[j]){
                        int l=j;
                        for(int k=i;k<s.size();++k){
                            if(s[k]==c[l]) sum+=2;
                            else break;
                            l++;
                        }
                    }
                    ans=max(sum,ans);
                }
            }
            cout << s.size()+c.size()-ans << endl;
    }
}
