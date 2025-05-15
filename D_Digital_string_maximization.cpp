#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
const int N=1e5+10;
#define int long long
int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    int n=s.size();

    for(int i=1; i<n; i++){
        
        while(i>=1 and (s[i]-'0')-1>(s[i-1]-'0') and s[i]>'0'){

            swap(s[i],s[i-1]);
            int k=s[i-1]-'0';
            k--;
            s[i-1]=k+'0';

            if(i==1){
                break;
            }
            
            i--;
        }
    }

    cout<<s<<"\n";

   }
                
                
    return 0;
}