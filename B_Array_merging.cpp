#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
     int n;
     cin >> n;
     int a[n],b[n];
     for(int i=0;i<n;++i) cin >> a[i];
     for(int i=0;i<n;++i) cin >> b[i];
     int sum=1;
     unordered_map<int,int>m1;
     unordered_map<int,int>m2;
     for(int i=0;i<n-1;++i){
        if(a[i]==a[i+1]) sum++;
        else {sum=1;}
        m1[a[i]]=max(m1[a[i]],sum); 
     }
      m1[a[n-1]]=max(m1[a[n-1]],sum); 
     sum=1;
     for(int i=0;i<n-1;++i){
        if(b[i]==b[i+1]) sum++;
        else {sum=1;}
        m2[b[i]]=max(m2[b[i]],sum); 
     }
      m2[b[n-1]]=max(m2[b[n-1]],sum); 
     int ans=0;
     for(int i=0;i<=2*n;++i){
        ans=max(ans,m1[i]+m2[i]);
     }
     cout << ans << endl;
    }
}